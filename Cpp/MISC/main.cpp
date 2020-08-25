#include <iostream>

// call C function
extern "C"
{
    void f();
}

void func(void)
{
    std::cout << "\n being used within  C++ code\n";
}


int main(void)
{
    f();
    func();
    return 0;
}