# Section 1.5.1 _The_ `Sales_item` _class_

## Exercise 1.22

> Write a program that reads several transactions for the same `ISBN`. Write the sum of all the transactions that were read.

`main.cpp`
```cpp
#include "../../Sales_item.h"
#include <iostream>

int main()
{
    std::cout << "Enter a set of books with equal ISBNs:" << std::endl;

    Sales_item item, total_item;
    /*
     * Read first book and save it as total_item object
     * because of getting the ISBN
     */
    std::cin >> total_item;
    while (std::cin >> item)
        total_item += item;

    std::cout << "The sum of a set of books with "
              << total_item.isbn() << " ISBNs is"
              << std::endl << total_item << std::endl;

    return 0;
}
```
