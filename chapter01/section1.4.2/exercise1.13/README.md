# Section 1.4.2 _The_ `for` _statement_

## Exercise 1.13

> Rewrite the first two exercises from $\S$ 1.4.1 (p. 13) using `for` loops.

`main1.9.cpp` ([exercise1.9](../../section1.4.1/exercise1.9/))
```cpp
#include <iostream>

int main() {
    std::cout << "Sum of numbers from 50 to 100 is ";

    int sum = 0;
    // Single statement block, curly brackets are not necessary
    for (int i = 50; i <= 100; i++)
        sum += i;

    std::cout << sum << "." << std::endl;

    return 0;
}
```

`main1.10.cpp` ([exercise1.10](../../section1.4.1/exercise1.10/))
```cpp
#include <iostream>

int main() {
    std::cout << "Sum of numbers from 10 to 0 is ";

    int sum = 0;
    // Single statement block, curly brackets are not necessary
    for (int i = 10; i >= 0; i--)
        sum += i;

    std::cout << sum << "." << std::endl;

    return 0;
}
```