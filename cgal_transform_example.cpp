#include <CGAL/Simple_cartesian.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/IO/Polyhedron_iostream.h>
#include <CGAL/Aff_transformation_3.h>

#include <iostream>
#include <iostream>
#include <fstream>
#include <string>

typedef CGAL::Simple_cartesian<double> Kernel;
typedef CGAL::Polyhedron_3<Kernel> Polyhedron;
typedef Kernel::Point_3 Point_3;
typedef Polyhedron::Facet_iterator Facet_iterator;
typedef Polyhedron::Halfedge_around_facet_circulator Halfedge_facet_circulator;

int main() {
	std::ifstream in("test.off");
	//std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
	//std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!

	std::ofstream out("test_after_translation.off");
	//std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
	//std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

	Polyhedron P;
	std::cin >> P;
	CGAL::Aff_transformation_3<Kernel> A(0.0, -2.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	transform( P.points_begin(), P.points_end(), P.points_begin(), A);

	/* code to write to off file after translation */
	out << P;
	
	//std::cin.rdbuf(cinbuf);   //reset to standard input again
	//std::cout.rdbuf(coutbuf); //reset to standard output again

	std::cout << "Completed. " << std::endl;

	return 1;
}
