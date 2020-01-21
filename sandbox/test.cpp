#include <vcore/vcore.h>

class test : public vCore::Application {
private:
bool running;
public:
test() {}
void run() {
createWindow();
running=1;
while(running) {
running=update();
}
}
};

int main() {
test t;
t.run();
}
