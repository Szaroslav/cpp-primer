# Section 1.4.1 _The_ `while` _statement_

## Exercise 1.9

> Write a program that uses a `while` to sum the numbers from $50$ to $100$.

`main.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Sum of numbers from 50 to 100 is ";

    int sum = 0, i = 50;
    while (i <= 100) {
        sum += i;
        i++;
    }

    std::cout << sum << std::endl;

    return 0;
}
```