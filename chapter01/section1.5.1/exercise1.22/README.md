# Section 1.5.1 _The_ `Sales_item` _class_

## Exercise 1.22

> [http://www.informit.com/title/0321714113](http://www.informit.com/title/0321714113) _(__Downloads__ tab)_ contains a copy of `Sales_item.h` in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

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
