//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//#include "Source/graphics/Window.h"
//#include "Source/graphics/shader.h"
//#include <iostream>
//
//
//const int WINDOW_WIDTH = 800;
//const int WINDOW_HEIGH = 600;
//const char * WINDOW_TITLE = "ZJU GameDevelop Engine";
//
//
//int main() {
//
//	Window window = Window(WINDOW_TITLE, WINDOW_WIDTH, WINDOW_HEIGH);
//
//	GLfloat vertices[] = {
//		0,0,0,
//		8,0,0,
//		0,3,0,
//		0,3,0,
//		8,3,0,
//		8,0,0
//	};
//
//	GLuint vbo;
//	glewInit();
//	glGenBuffers(1, &vbo);
//	glBindBuffer(GL_ARRAY_BUFFER, vbo);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
//	glEnableVertexAttribArray(0);
//
//	Shader shader("Source/shaders/basic.vert", "Source/shaders/basic.frag");
//	shader.enable();
//
//	shader.setUniformMat4("projection_matrix", mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));
//	shader.setUniformMat4("model_matrix", mat4::translation(vec3(4, 3, 0)));
//	shader.setUniform4f("color1", vec4(0.2f, 0.3f, 0.8f, 1.0f));
//	shader.setUniform2f("light_position", vec2(8.0, 4.5));
//
//
//	while (!window.closed()) {
//		window.clear();
//		double x, y;
//		window.getMousePosition(x, y);
//		x = x / WINDOW_WIDTH * 16;
//		y = 9 - y / WINDOW_HEIGH * 9;
//		shader.setUniform2f("light_position", vec2(x, y));
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		window.update();
//	}
//
//
//	return 0;
//}