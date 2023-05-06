# Section 1.4.3 _Reading an unknown number of inputs_

## Exercise 1.16

> Write your own version of a program that prints the sum of a set of integers read from `cin`.

```cpp
#include <iostream>

int main()
{
    int sum = 0, n;
    while (std::cin >> n)
        sum += n;

    std::cout << std::endl
              << "The sum of entered numbers is "
              << sum << std::endl;

    return 0;
}
```
