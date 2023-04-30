# 1.2 A first look at input/output

## Exercise 1.3

> Write a program to print `Hello, World` on the standard output.

`main.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World" << std::endl;

    return 0;
}
```

## Exercise 1.4

> Our program used the addition operator, `+`, to add two numbers. Write a program that uses the multiplication operator, `*`, to print the product instead.

`main.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;

    std::cout << "The multiplication of " << a << " and " << b
              << " is " << a * b << std::endl;
    
    return 0;
}
```

## Exercise 1.5

> We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

## Exercise 1.6

> Explain whether the following program fragment is legal.
> ```cpp
> std::cout << "The sum of " << v1;
>           << " and " << v2;
>           << " is " << v1 + v2 << std::endl;
> ```
> If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?