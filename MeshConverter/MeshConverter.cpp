#include <wrap/io_trimesh/import.h>
#include <wrap/io_trimesh/export.h>
#include <iostream>

// http://vcg.isti.cnr.it/vcglib/basic_concepts.html
class MyVertex; class MyEdge; class MyFace;
struct MyUsedTypes : public vcg::UsedTypes<vcg::Use<MyVertex>::AsVertexType, vcg::Use<MyEdge>::AsEdgeType, vcg::Use<MyFace>::AsFaceType>{};

class MyVertex : public vcg::Vertex< MyUsedTypes, vcg::vertex::Coord3f, vcg::vertex::Normal3f, vcg::vertex::BitFlags >{};
class MyFace : public vcg::Face< MyUsedTypes, vcg::face::FFAdj, vcg::face::VertexRef, vcg::face::BitFlags > {};
class MyEdge : public vcg::Edge< MyUsedTypes> {};
class MyMesh : public vcg::tri::TriMesh< std::vector<MyVertex>, std::vector<MyFace> , std::vector<MyEdge> > {};

int main(int argc, char *argv[])
{
	MyMesh m;

	char *type_in = argv[1];
	char *inp = argv[2];
	char *type_out = argv[3];
	char *out = argv[4];

	int loadmask = 0;

	if(!strcmp(type_in, "-ply"))
	{
		std::cout << "Loading .ply mesh... "<< inp << std::endl;
		vcg::tri::io::ImporterPLY<MyMesh>::Open(m, inp);
	}
	else if(!strcmp(type_in, "-stl"))
	{
		std::cout << "Loading .stl mesh... "<< inp << std::endl;
		vcg::tri::io::ImporterSTL<MyMesh>::Open(m, inp, loadmask);
	}
	else if(!strcmp(type_in, "-off"))
	{
		std::cout << "Loading .off mesh... "<< inp << std::endl;
		vcg::tri::io::ImporterOFF<MyMesh>::Open(m, inp);
	}
	else
	{
		std::cout << "Invalid input flag" << std::endl;
		return 1;
	}
	
	if(!strcmp(type_out,"-ply"))
	{
		std::cout << "Saving .ply mesh..."<< out << std::endl;
		vcg::tri::io::ExporterPLY<MyMesh>::Save(m, out);
	}
	else if(!strcmp(type_out,"-stl"))
	{
		std::cout << "Saving .stl mesh..."<< out << std::endl;
		vcg::tri::io::ExporterSTL<MyMesh>::Save(m, out);
	}
	else if(!strcmp(type_out,"-off"))
	{
		std::cout << "Saving .off mesh..."<< out << std::endl;
		vcg::tri::io::ExporterOFF<MyMesh>::Save(m, out);
	}
	else if(!strcmp(type_out,"-vrml"))
	{
		std::cout << "Saving .vrml mesh..." << std::endl;
		vcg::tri::io::ExporterWRL<MyMesh>::Save(m, out, loadmask);
	}
	else
	{
		std::cout << "Invalid output flag" << std::endl;
		return 1;
	}

	return 0;
}
