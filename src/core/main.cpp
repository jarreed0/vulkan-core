#include "window.cpp"
int main() {
bool running=1;
vCore::window w;
w.createWindow();
while(running)
{
running=w.update();
}
}
