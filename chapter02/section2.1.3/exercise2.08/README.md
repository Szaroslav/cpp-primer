# Section 2.1.3 _Literals_

## Exercise 2.08

> Using escape sequences, write a program to print `2M` followed by a newline. Modify the program to print `2`, then a tab, then an `M`, followed by a newline.

Used [Wikipedia ASCII](https://en.wikipedia.org/wiki/ASCII#Printable_characters) article to get octal values of characters.

`main.cpp`
```cpp
#include <iostream>

int main()
{
    std::cout << "\62\115\n";   // 2M
    std::cout << "\62\t\115\n"; // 2    M

    return 0;
}
```
