# Section 1.5.2 _A first look at member functions_

## Exercise 1.23

> Write a program that reads several transactions and counts how many transactions occur for each `ISBN`.

### Right solution

`main.cpp`
```cpp
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
```


### _First, definitely more ambitious and beyond knowledge of average reader_

Anything else didn't come to my mind, when I was thinking about solution than using `std::map` from the standard library. Feel free to skip this solution, because `map`s hasn't been introduced yet.  
The program uses `C++17` and `C++20` features, compile it using `-std=c++20` flag for `GCC` compiler.
```bash
g++ main_map.c -o main_map -std=c++20
```

`main_map.cpp`
```cpp
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
```
