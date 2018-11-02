//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//#include "Window.h"
//#include <iostream>
//
//#include "mat4.h"
//#include "vec2.h"
//
//const int WINDOW_WIDTH = 400;
//const int WINDOW_HEIGH = 300;
//const char * WINDOW_TITLE = "ZJU GameDevelop Engine";
//
//
//
//
//int main(void) {
//
//	if (!glfwInit())
//		return -1;
//
//
//	Window window = Window(WINDOW_TITLE, WINDOW_WIDTH, WINDOW_HEIGH);
//
//	if (!window.Create()) {
//		return -1;
//	}
//
//	mat4 testMatrix(1);
//	testMatrix.columns[0] = { -0.5,0.5,0,1 };
//	testMatrix.columns[1] = { -0.5,-0.5,0,1 };
//	testMatrix.columns[2] = { 0.5,0.5,0,1 };
//	testMatrix.columns[3] = { 0.5,-0.5,0,1 };
//
//	mat4 small = mat4::scale(vec3(0.5, 0.5, 0.5));
//	mat4 rotate = mat4::rotation(45.0f, vec3(0, 0, 1));
//	mat4 move = mat4::translation(vec3(0.3, 0.5, 0));
//	mat4 view = mat4::perspective(60, WINDOW_WIDTH / WINDOW_HEIGH, 0.1, 1.0);
//	mat4 view2 = mat4::orthographic(0.1, 0.9, 0.1, 0.9, 0.5, -0.9);
//	mat4 m = testMatrix;
//	m *= small;
//	//m *= move;
//	m *= rotate;
//
//	for (int i = 0; i < 4; i++) {
//		std::cout << m.columns[i];
//	}
//
//
//	while (!window.isClosed()) {
//		/* Render here */
//
//		window.Clear();
//
//		//ÉèÖÃ±³¾°É«
//		glClearColor(0.0f, 0.0f, 1.0f, 0.9f);
//
//		glBegin(GL_TRIANGLES);
//		glColor3f(1.0f, 0.0f, 0.0f);
//		glVertex3f(m.element[0], m.element[1], m.element[2]);
//		glVertex3f(m.element[4], m.element[5], m.element[6]);
//		glVertex3f(m.element[8], m.element[9], m.element[10]);
//		glEnd();
//
//		glBegin(GL_TRIANGLES);
//		glColor3f(1.0f, 0.0f, 0.0f);
//		glVertex3f(m.element[12], m.element[13], m.element[14]);
//		glVertex3f(m.element[4], m.element[5], m.element[6]);
//		glVertex3f(m.element[8], m.element[9], m.element[10]);
//		glEnd();
//
//		glFlush();
//
//		window.Update();
//	}
//
//	window.Close();
//
//
//
//	return 0;
//}
//
//
