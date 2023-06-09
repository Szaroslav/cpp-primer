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