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
GLFWwindow* Application::createWindow() {
return createWindow(title, width, height);
}
GLFWwindow* Application::createWindow(std::string s) {
setTitle(s);
return createWindow(title, width, height);
}
GLFWwindow* Application::createWindow(int w, int h) {
setSize(w, h);
return createWindow(title, w, h);
}
GLFWwindow* Application::createWindow(std::string s, int w, int h) {
setSize(w, h);
setTitle(s);
glfwInit();
glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
glfwWindow = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
return glfwWindow;
}
void Application::destroy() {
glfwDestroyWindow(glfwWindow);
glfwTerminate();
}
bool Application::update() {
 if(glfwWindowShouldClose(glfwWindow)) {
  close();
 }
 glfwPollEvents();
 return open;
}

}
