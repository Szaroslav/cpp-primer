#include <iostream>

int main()
{
    int a = 3, b = 12, *ptr = &a;
    std::cout << "a: " << a
              << ",\tb: " << b
              << ",\t\tptr: " << ptr
              << ",\t*ptr: " << *ptr << std::endl;

    // Changing the value of pointer
    ptr = &b;
    std::cout << "a: " << a
              << ",\tb: " << b
              << ",\t\tptr: " << ptr
              << ",\t*ptr: " << *ptr << std::endl;

    // Changing the value to which the pointer points
    *ptr = 2137;
    std::cout << "a: " << a
              << ",\tb: " << b
              << ",\tptr: " << ptr
              << ",\t*ptr: " << *ptr << std::endl;
}
