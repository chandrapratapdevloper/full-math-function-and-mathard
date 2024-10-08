#include <iostream>
#include "MathLibrary.h"

// Sample function for derivative and integral calculations
double sampleFunction(double x) {
    return x * x; // Example: f(x) = x^2
}

int main() {
    double num1 = 5.5;
    double num2 = 2.3;

    std::cout << "Addition: " << MathLibrary::add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << MathLibrary::subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << MathLibrary::multiply(num1, num2) << std::endl;
    std::cout << "Division: " << MathLibrary::divide(num1, num2) << std::endl;
    std::cout << "Ceiling: " << MathLibrary::ceil(num1) << std::endl;
    std::cout << "Floor: " << MathLibrary::floor(num1) << std::endl;
    std::cout << "Maximum: " << MathLibrary::maximum(num1, num2) << std::endl;
    std::cout << "Minimum: " << MathLibrary::minimum(num1, num2) << std::endl;
    std::cout << "Square: " << MathLibrary::square(num1) << std::endl;
    std::cout << "Power (2^3): " << MathLibrary::power(2, 3) << std::endl;
    std::cout << "Factorial of 5: " << MathLibrary::factorial(5) << std::endl;
    std::cout << "Fibonacci(10): " << MathLibrary::fibonacci(10) << std::endl;
    std::cout << "Reversed string: " << MathLibrary::reverseString("Hello") << std::endl;
    std::cout << "Power (m^n): " << MathLibrary::powerMToN(2, 3) << std::endl;
    std::cout << "Derivative of x^2 at x=2: " << MathLibrary::derivative(sampleFunction, 2) << std::endl;
    std::cout << "Integral of x^2 from 0 to 1: " << MathLibrary::integral(sampleFunction, 0, 1) << std::endl;

    return 0;
}
