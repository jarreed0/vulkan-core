#include "core.h"

namespace vCore {
window::window() {
setSize(500, 500);
setTitle("Vulkan Core");
}
window::~window() {
open=0;
destroy();
}
GLFWwindow* window::createWindow() {
return createWindow(title, width, height);
}
GLFWwindow* window::createWindow(std::string s) {
setTitle(s);
return createWindow(title, width, height);
}
GLFWwindow* window::createWindow(int w, int h) {
setSize(w, h);
return createWindow(title, w, h);
}
GLFWwindow* window::createWindow(std::string s, int w, int h) {
setSize(w, h);
setTitle(s);
glfwInit();
glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
glfwWindow = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
return glfwWindow;
}
void window::destroy() {
glfwDestroyWindow(glfwWindow);
glfwTerminate();
}
bool window::update() {
 if(glfwWindowShouldClose(glfwWindow)) {
  close();
 }
 glfwPollEvents();
 return open;
}

}
