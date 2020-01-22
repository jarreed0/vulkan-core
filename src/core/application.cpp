#include "application.h"

namespace vCore {
Application::Application() {
setSize(500, 500);
setTitle("Vulkan Core");
}
Application::~Application() {
open=0;
destroy();
}
VC_WINDOW* Application::createWindow() {
return createWindow(title, width, height);
}
VC_WINDOW* Application::createWindow(std::string s) {
setTitle(s);
return createWindow(title, width, height);
}
VC_WINDOW* Application::createWindow(int w, int h) {
setSize(w, h);
return createWindow(title, w, h);
}
VC_WINDOW* Application::createWindow(std::string s, int w, int h) {
setSize(w, h);
setTitle(s);
glfwInit();
glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
return window;
}
void Application::destroy() {
glfwDestroyWindow(window);
glfwTerminate();
}
bool Application::update() {
 if(glfwWindowShouldClose(window)) {
  close();
 }
 glfwPollEvents();
 return open;
}

}
