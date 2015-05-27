#include <SFML/Graphics.hpp>
#define GLEW_STATIC
#include <GL/glew.h>
#include <stdio.h>

int main()
{
	sf::ContextSettings settings;
	settings.depthBits = 24;
	settings.stencilBits = 8;
	settings.antialiasingLevel = 2; // Optional

	sf::Window window(sf::VideoMode(800, 600), "OpenGL", sf::Style::Close, settings);
	glewExperimental = GL_TRUE;
	glewInit();

	GLuint vertexBuffer;
	glGenBuffers(1, &vertexBuffer);

	printf("%u\n", vertexBuffer);
	
	float vertices[] = {
	0.0f,  0.5f, // Vertex 1 (X, Y)
	0.5f, -0.5f, // Vertex 2 (X, Y)
	-0.5f, -0.5f  // Vertex 3 (X, Y)
	};

	GLuint vbo;
	glGenBuffers(1, &vbo); // Generate 1 buffer

	glBindBuffer(GL_ARRAY_BUFFER, vbo);

	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	bool running = true;
	while (running)
	{
	    sf::Event windowEvent;
	    while (window.pollEvent(windowEvent))
	    {
		switch (windowEvent.type)
		{
			case sf::Event::Closed:
			running = false;
			break;

			case sf::Event::KeyPressed:
				if (windowEvent.key.code == sf::Keyboard::Escape)
					running = false;
			break;

		}
	    }

	    
	}
	
	return 0;
}

