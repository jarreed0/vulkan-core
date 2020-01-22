#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <vulkan/vulkan.h>
#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "log.h"

#define VC_WINDOW GLFWwindow //!<VCORE WINDOW MACRO

//!Namespace Used By Wrapper
namespace vCore {
//! Standar vCore Class To Create Application
class Application {
private:
	std::string title; //!<Window Title
	int width, height; //!<Window size
	VC_WINDOW* window; //!<Window Object
	bool open; //!<Boolean if the window is open
public:
	//!Application Constructor
	Application();
	//!Application Deconstructor
	~Application();
	//!Create Window with default title and size
	VC_WINDOW* createWindow();
	//!Create Window with defualt size and specified title
	VC_WINDOW* createWindow(std::string s);
	//!Create Window with defualt title and specified size
	VC_WINDOW* createWindow(int w, int h);
	//!Create Window with specified title and size
	VC_WINDOW* createWindow(std::string s, int w, int h);
	//!Set Window Title
	void setTitle(std::string t) {title=t;}
	//!Get Window Width
	int getWidth() {return width;}
	//!Set Window Width
	void setWidth(int w) {width=w;}
	//!Get Window Height
	int getHieght() {return height;}
	//!Set Window Height
	void setHeight(int h) {height=h;}
	//!Set Window Size
	void setSize(int w, int h) {setHeight(h);setWidth(w);}
	//!Destroy Objects
	void destroy();
	//!Close Window
	void close() {open=0;destroy();}
	//!Update Window
	bool update();
	//!Get VC_WINDOW
	VC_WINDOW* getWindow() {return window;}
}; }

#endif //WINDOW_H
