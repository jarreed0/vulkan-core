#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <vulkan/vulkan.h>
#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace vCore { class Application {
private:
	std::string title;
	int width, height;
	GLFWwindow* glfwWindow;
	bool open;
public:
	Application();
	~Application();
	GLFWwindow* createWindow();
	GLFWwindow* createWindow(std::string s);
	GLFWwindow* createWindow(int w, int h);
	GLFWwindow* createWindow(std::string s, int w, int h);
	void setTitle(std::string t) {title=t;}
	int getWidth() {return width;}
	void setWidth(int w) {width=w;}
	int getHieght() {return height;}
	void setHeight(int h) {height=h;}
	void setSize(int w, int h) {setHeight(h);setWidth(w);}
	void destroy();
	void close() {open=0;destroy();}
	bool update();
	GLFWwindow* getWindow() {return glfwWindow;}
}; }

#endif //WINDOW_H
