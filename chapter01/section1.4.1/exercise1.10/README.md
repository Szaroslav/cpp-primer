# Section 1.4.1 _The_ `while` _statement_

## Exercise 1.10

> In addition to the `++ `operator that adds $1$ to its operand, there is a decrement operator (`--`) that subtracts $1$. Use the decrement operator to write a `while` that prints the numbers from ten down to zero.

`main.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Sum of numbers from 10 to 0 is ";

    int sum = 0, i = 10;
    while (i >= 0) {
        sum += i;
        i--;
    }

    std::cout << sum << "." << std::endl;

    return 0;
}
```