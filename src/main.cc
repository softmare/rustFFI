#include<iostream>

extern "C" unsigned int addition(unsigned int a,unsigned int b);

int main()
{
    std::cout << "hi, 3 + 4 = " << addition(3,4) << std::endl;
    return 0;
}