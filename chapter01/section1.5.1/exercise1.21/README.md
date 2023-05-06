# Section 1.5.1 _The_ `Sales_item` _class_

## Exercise 1.21

> Write a program that reads two `Sales_item` objects that have the same `ISBN` and produces their sum.

`main.cpp`
```cpp
#include "../../Sales_item.h"
#include <iostream>

int main()
{
    std::cout << "Enter set 2 books with equal ISBNs:" << std::endl;
    Sales_item item1, item2;
    std::cin >> item1 >> item2;

    std::cout << "The sum of '"
              << item1 << "' and '"
              << item2 << "' is"
              << std::endl;
    std::cout << item1 + item2 << std::endl;

    return 0;
}
```
