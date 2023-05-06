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


## Exercise 1.11

> Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

`main.cpp`
```cpp
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter 2 numbers ";
    std::cin >> a >> b;

    std::cout << "Sum of numbers from " << a << " to " << b << " is ";

    int sum = 0;
    /*
     * Assume that a <= b, `if` statements haven't been introduced yet
     * Otherwise the sum is 0 (because a > b, so condition is false at once)
     */
    while (a <= b) {
        sum += a;
        a++;
    }

    std::cout << sum << "." << std::endl;

    return 0;
}
```
