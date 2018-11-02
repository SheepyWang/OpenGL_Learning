#include <iostream>

#include "Source/graphics/Window.h"
#include "Source/graphics/shader.h"
#include "Source/graphics/buffer/vertexarray.h"
#include "Source/graphics/buffer/indexbuffer.h"



const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGH = 600;
const char * WINDOW_TITLE = "ZJU GameDevelop Engine";


int main() {

	Window window = Window(WINDOW_TITLE, WINDOW_WIDTH, WINDOW_HEIGH);

	GLfloat vertices[] = {
	0, 0, 0,
	0, 3, 0,
	8, 3, 0,
	8, 0, 0
	};

	GLushort indicies[] = {
		0,1,2,
		2,3,0
	};

	GLfloat colorsA[] = {
		1,0,1,1,
		1,0,1,1,
		1,0,1,1,
		1,0,1,1
	};

	GLfloat colorsB[] = {
		0.2f, 0.3f, 0.8f, 1.0f,
		0.2f, 0.3f, 0.8f, 1.0f,
		0.2f, 0.3f, 0.8f, 1.0f,
		0.2f, 0.3f, 0.8f, 1.0f
	};

	VertexArray vao1, vao2;
	IndexBuffer ibo(indicies, 6);

	vao1.addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
	vao1.addBuffer(new Buffer(colorsA, 4 * 4, 4), 1);

	vao2.addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
	vao2.addBuffer(new Buffer(colorsB, 4 * 4, 4), 1);



	Shader shader("Source/shaders/basic.vert", "Source/shaders/basic.frag");
	shader.enable();

	shader.setUniformMat4("projection_matrix", mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));
	shader.setUniformMat4("model_matrix", mat4::translation(vec3(4, 3, 0)));
	shader.setUniform4f("color1", vec4(0.2f, 0.3f, 0.8f, 1.0f));
	shader.setUniform2f("light_position", vec2(8.0, 4.5));


	while (!window.closed()) {
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		x = x / WINDOW_WIDTH * 16;
		y = 9 - y / WINDOW_HEIGH * 9;
		shader.setUniform2f("light_position", vec2(x, y));

		vao1.bind();
		ibo.bind();
		shader.setUniformMat4("model_matrix", mat4::translation(vec3(4, 3, 0)));
		glDrawElements(GL_TRIANGLES, ibo.getCount(), GL_UNSIGNED_SHORT, 0);
		ibo.unbind();
		vao1.unbind();

		vao2.bind();
		ibo.bind();
		shader.setUniformMat4("model_matrix", mat4::translation(vec3(0.0f, 0.0f, 0.0f)));
		glDrawElements(GL_TRIANGLES, ibo.getCount(), GL_UNSIGNED_SHORT, 0);
		ibo.unbind();
		vao2.unbind();

		window.update();
	}


	return 0;
}