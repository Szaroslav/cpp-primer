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