#include <iostream>
extern "C"
{
#include "c_learn.h"
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    c_main();
    return 0;
}