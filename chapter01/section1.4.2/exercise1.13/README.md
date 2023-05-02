# 1.4.2 The `for` statement

## Exercise 1.13

> Rewrite the first two exercises from $\S$ 1.4.1 (p. 13) using `for` loops.

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