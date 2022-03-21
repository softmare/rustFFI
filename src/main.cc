#include<iostream>

extern "C" unsigned int addition(unsigned int a,unsigned int b);

int main()
{
    u_int32_t a, b;
    std::cout << "Input uint32 A : ";
    std::cin >> a;
    std::cout << "Input uint32 B : ";
    std::cin >> b;
    std::cout << "Result of " << a << " + " << b << " = " << addition(a,b) << std::endl;
    return 0;
}