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