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