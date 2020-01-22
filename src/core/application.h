#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <vulkan/vulkan.h>
#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "log.h"

#define VC_WINDOW GLFWwindow

namespace vCore { class Application {
private:
	std::string title;
	int width, height;
	VC_WINDOW* window;
	bool open;
public:
	Application();
	~Application();
	VC_WINDOW* createWindow();
	VC_WINDOW* createWindow(std::string s);
	VC_WINDOW* createWindow(int w, int h);
	VC_WINDOW* createWindow(std::string s, int w, int h);
	void setTitle(std::string t) {title=t;}
	int getWidth() {return width;}
	void setWidth(int w) {width=w;}
	int getHieght() {return height;}
	void setHeight(int h) {height=h;}
	void setSize(int w, int h) {setHeight(h);setWidth(w);}
	void destroy();
	void close() {open=0;destroy();}
	bool update();
	VC_WINDOW* getWindow() {return window;}
}; }

#endif //WINDOW_H
