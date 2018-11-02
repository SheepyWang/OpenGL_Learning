//#include "fileutils.h"
//#include "Window.h"
//#include <iostream>
//
//const int WINDOW_WIDTH = 800;
//const int WINDOW_HEIGH = 600;
//const char * WINDOW_TITLE = "ZJU GameDevelop Engine";
//
//
//int main() {
//	const char * filePath = "c:\\Proj_VS\\OpenGL_Learning\\OpenGL\\main.cpp";
//
//	std::string s = FileUtils::read_file(filePath);
//
//	std::cout << s << std::endl;
//
//
//	if (!glfwInit())
//		return -1;
//
//	Window window = Window(WINDOW_TITLE, WINDOW_WIDTH, WINDOW_HEIGH);
//
//	if (!window.Create()) {
//		return -1;
//	}
//
//	std::cout << "OpenGL " << glGetString(GL_VERSION) << std::endl;
//
//	window.Close();
//
//
//	return 0;
//}