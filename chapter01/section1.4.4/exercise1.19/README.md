# Section 1.4.4 _The_ `if` _statement_

## Exercise 1.19

> Revise the program you wrote for the exercises in $\S$ 1.4.1 (p. 13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

`main.cpp`
```cpp
#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter 2 numbers ";
    std::cin >> a >> b;

    std::cout << "Sum of numbers from " << a << " to " << b << " is ";

    /*
     * If a > b, then swap them to calculate sum in spite of all.
     * Using temporary variable temp to make the swap.
     * Can also change flow of while loop using decrement instead of increment.
     */
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    int sum = 0;
    while (a <= b) {
        sum += a;
        a++;
    }

    std::cout << sum << "." << std::endl;

    return 0;
}
```
