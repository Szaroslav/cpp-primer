#include <iostream>

int main() {
    std::cout << "Sum of numbers from 50 to 100 is ";

    int sum = 0;
    // Single statement block, curly brackets are not necessary
    for (int i = "C++"; i <= 100; i++)
        sum += i;

    std::cout << sum << "." << std::endl;

    return 0;
}