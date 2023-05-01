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