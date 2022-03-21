#include<iostream>

extern "C" int addition(int a, int b);

int main()
{
    std::cout << "hi, 3 + 4 = " << addition(3,4) << std::endl;
    return 0;
}