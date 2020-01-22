#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

/*
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47
-+-+-+-+-+-+-+-+-+-+-+-+-+
reset             0  (everything back to normal)
bold/bright       1  (often a brighter shade of the same colour)
underline         4
inverse           7  (swap foreground and background colours)
bold/bright off  21
underline off    24
inverse off      27
-+-+-+-+-+-+-+-+-+-+-+-+-+
https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
*/

namespace vCore { //class logger {

//! PRINT TO SCREEN
template<typename T>
void log(T a) {
 std::cout << a << "\n";
}

//! Display Error In Red
template<typename T>
void error(T a) {
 std::cout << "\033[1;31m" << a << "\033[0m\n";
}

//! Display Debug Message In Blue
template<typename T>
void debug(T a) {
 std::cout << "\033[1;34m" << a << "\033[0m\n";
}

//! Display Warning Highlighted Yellow
template<typename T>
void warning(T a) {
 std::cout << "\033[1;43m" << a << "\033[0m\n";
}

//! Display Success In Green
template<typename T>
void success(T a) {
 std::cout << "\033[1;32m" << a << "\033[0m\n";
}

//! Display Notice In White
template<typename T>
void notice(T a) {
 std::cout << "\033[1;37m" << a << "\033[0m\n";
}

//! Display Log With Set Color
template<typename T>
void log(T a, int x) {
 std::cout << "\033[1;" << x<< "m" << a << "\033[0m\n";
}

}
//}; }

#endif //LOG_H
