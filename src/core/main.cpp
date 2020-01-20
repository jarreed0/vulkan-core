#include "core.cpp"

class test : public vCore::window {
public:
test() {
createWindow();
}
};

int main() {
bool running=1;
test t;
while(running)
{
running=t.update();
}
}
