#include <iostream>

int main() {
    std::cout << "Sum of numbers from 50 to 100 is ";

    int sum = 0, i = 50;
    while (i <= 100) {
        sum += i;
        i++;
    }

    std::cout << sum << "." << std::endl;

    return 0;
}