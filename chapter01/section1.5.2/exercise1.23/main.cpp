#include "../../Sales_item.h"
#include <iostream>
#include <string>
#include <map>

int main()
{
    std::cout << "Enter a set of books:" << std::endl;

    Sales_item item;
    std::map<std::string, int> count_map;
    /*
     * Read from standard input books.
     * If map contains the record (transaction has been made earlier),
     * increase count of element by 1.
     * Otherwise assign the element to 1 (initialization).
     */
    while (std::cin >> item) {
        // contains() method is a C++20 standard
        if (count_map.contains(item.isbn()))
            count_map[item.isbn()]++;
        else
            count_map[item.isbn()] = 1;
    }

    /*
     * Iterate over all elements in count_map.
     * In other words, print count of all grouped transactions.
     */
    for (const auto& [key, value] : count_map)
        std::cout << "The number of transactions of " << key << ": "
                  << value << std::endl;   

    return 0;
}