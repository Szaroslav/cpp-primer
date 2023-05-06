# Section 1.4.4 _The_ `if` _statement_

## Exercise 1.17

> What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

1. Entered values are all equal: _program prints only once count of all values (_`x occurs n times`_, when $n$ is number of input numbers)_.
2. Entered values are unique: _program prints $n$ times_ `x occurs 1 times`_, when $n$ is number of unique numbers_.



## Exercise 1.18

> Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

`main.cpp`
```cpp
#include <iostream>

int main()
{
    // currVal is the number we’re counting; we’ll read new values into val
    int currVal = 0, val = 0;
    
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1; // store the count for the current value we’re processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal) // if the values are the same
                ++cnt; // add 1 to cnt
            else { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs "
                << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt = 1; // reset the counter
            }
    } // while loop ends here

    // remember to print the count for the last value in the file
    std::cout << currVal << " occurs "
              << cnt << " times" << std::endl;
    } // outermost if statement ends here

    return 0;
}
```



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

