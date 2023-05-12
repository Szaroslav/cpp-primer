# Section 2.3.2 _Pointers_

## Exercise 2.18

> Write code to change the value of a pointer. Write code to change the value to which the pointer points.

`main.cpp`
```cpp
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
```

Output:
```
a: 3,   b: 12,          ptr: 0x7fffae894c08,    *ptr: 3
a: 3,   b: 12,          ptr: 0x7fffae894c0c,    *ptr: 12
a: 3,   b: 2137,        ptr: 0x7fffae894c0c,    *ptr: 2137
```
