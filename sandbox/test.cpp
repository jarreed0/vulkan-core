#include <vcore/vcore.h>

class test : public vCore::Application {
private:
bool running;
public:
test() {}
void run() {
bool created = createWindow();
if(created) vCore::success("Window Created!");
if(!created) vCore::error("Failed to create window.");
running=1;
while(running) {
running=update();
}
vCore::log("Exiting..");
}
};

int main() {
vCore::log("Creating Object.");
test t;
t.run();
}
