#include "../../Sales_item.h"
#include <iostream>

int main()
{
    std::cout << "Enter an ordered set of books:" << std::endl;

    Sales_item item, current_item;
    int count = 1;
    if (std::cin >> current_item) {
        while (std::cin >> item) {
            if (item.isbn() == current_item.isbn()) {
                count++;
            }
            else {
                std::cout << "The number of transactions of "
                          << current_item.isbn() << ": "
                          << count << std::endl;
                current_item = item;
                count = 1;
            }
        }
    }

    // Flush the last set of transactions
    std::cout << "The number of transactions of "
              << current_item.isbn() << ": "
              << count << std::endl;

    return 0;
}
