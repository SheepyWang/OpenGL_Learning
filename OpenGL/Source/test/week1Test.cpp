//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//
//#include "Window.h"
//#include <iostream>
//#include <time.h>
//
//const int WINDOW_WIDTH = 800;
//const int WINDOW_HEIGH = 600;
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
//
//	int preTime = clock();
//	while (!window.isClosed()) {
//		/* Render here */
//
//		window.Clear();
//
//		//设置背景色
//		glClearColor(0.0f, 1.0f, 0.0f, 0.5f);
//
//
//		int nowTime = clock();
//
//		if (nowTime - preTime >= 1000) { //限制显示次数
//			window.PrintCursorPos();
//			window.PrintWndSize();
//			preTime = nowTime;
//		}
//		window.PrintMouseKey();
//		window.PrintKeyboardKey();
//
//		glBegin(GL_TRIANGLES);
//		glColor3f(1.0f, 0.0f, 0.0f);
//		glVertex2f(0.0f, 0.5f);
//		glVertex2f(0.5f, 0.5f);
//		glVertex2f(0.5f, 0.0f);
//		glEnd();
//
//		glBegin(GL_QUADS);
//		glColor4f(0.0f, 0.0f, 1.0f, 0.5f);
//		glVertex2f(0.0f, 0.0f);
//		glVertex2f(-0.5f, 0.0f);
//		glVertex2f(-0.5f, -0.5f);
//		glVertex2f(0.0f, -0.5f);
//		glEnd();
//
//		glFlush();
//
//		window.Update();
//	}
//
//	window.Close();
//	return 0;
//}
//
//
