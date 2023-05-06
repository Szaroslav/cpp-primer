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