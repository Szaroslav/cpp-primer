# Section 1.5.1 _The_ `Sales_item` _class_

## Exercise 1.20

> [http://www.informit.com/title/0321714113](http://www.informit.com/title/0321714113) _(__Downloads__ tab)_ contains a copy of `Sales_item.h` in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

`main.cpp`
```cpp
#include "../../Sales_item.h"
#include <iostream>

int main()
{
    std::cout << "Enter a set of books:" << std::endl;

    Sales_item item;
    while (std::cin >> item)
        std::cout << item << std::endl;

    return 0;
}
```
