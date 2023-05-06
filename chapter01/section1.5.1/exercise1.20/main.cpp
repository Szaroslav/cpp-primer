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