#include <iostream>  // Header for input/output

int main() {
    // Declare two integer variables
    int num1, num2, sum;

    // Prompt the user for input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Add the two numbers
    sum = num1 + num2;

    // Output the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;  // Indicate successful program termination
}
