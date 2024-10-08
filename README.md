# MathLibrary - Comprehensive Mathematical and Utility Functions

## Overview

`MathLibrary` is a C++ class designed to provide a wide range of mathematical functions and utilities, including arithmetic operations, factorial and Fibonacci calculations, string manipulations, and numerical methods for derivatives and integrals. This library can be particularly useful in mathematical modeling, scientific computing, and algorithm development.

## Features

- **Arithmetic Operations**: Perform basic operations such as addition, subtraction, multiplication, and division.
- **Mathematical Functions**: Calculate ceiling, floor, maximum, minimum, power, and square.
- **Factorial Calculation**: Get the factorial of a non-negative integer.
- **Fibonacci Sequence Generation**: Compute Fibonacci numbers up to a specified index.
- **String Manipulation**: Reverse strings for various applications.
- **Numerical Methods**: Approximate derivatives and integrals for continuous functions.

## How It Works

### Functions

1. **Arithmetic Operations**:
    - **Addition**: `add(double a, double b)`: Returns the sum of `a` and `b`.
    - **Subtraction**: `subtract(double a, double b)`: Returns the difference of `a` and `b`.
    - **Multiplication**: `multiply(double a, double b)`: Returns the product of `a` and `b`.
    - **Division**: `divide(double a, double b)`: Returns the quotient of `a` and `b`. Throws an exception if `b` is zero.

2. **Mathematical Functions**:
    - **Ceiling**: `ceil(double a)`: Returns the smallest integer greater than or equal to `a`.
    - **Floor**: `floor(double a)`: Returns the largest integer less than or equal to `a`.
    - **Maximum**: `maximum(double a, double b)`: Returns the larger of `a` and `b`.
    - **Minimum**: `minimum(double a, double b)`: Returns the smaller of `a` and `b`.
    - **Power**: `power(double base, double exp)`: Returns `base` raised to the power of `exp`.
    - **Square**: `square(double a)`: Returns the square of `a`.

3. **Special Functions**:
    - **Factorial**: `factorial(int n)`: Returns the factorial of `n`. Throws an exception if `n` is negative.
    - **Fibonacci**: `fibonacci(int n)`: Returns the nth Fibonacci number.

4. **String Manipulation**:
    - **Reverse String**: `reverseString(const std::string& str)`: Returns the reversed version of the input string.

5. **Numerical Methods**:
    - **Derivative**: `derivative(double (*func)(double), double x, double h)`: Approximates the derivative of `func` at point `x` using central difference.
    - **Integral**: `integral(double (*func)(double), double a, double b, int n)`: Approximates the integral of `func` from `a` to `b` using the trapezoidal rule.

## How to Run

### Step 1: Create the Header File

Create a file named `MathLibrary.h` and include the following code:

```cpp
#ifndef MATH_LIBRARY_H
#define MATH_LIBRARY_H

#include <cmath>
#include <algorithm>
#include <stdexcept>
#include <string>

class MathLibrary {
public:
    static double add(double a, double b);
    static double subtract(double a, double b);
    static double multiply(double a, double b);
    static double divide(double a, double b);
    
    static double ceil(double a);
    static double floor(double a);
    
    static double maximum(double a, double b);
    static double minimum(double a, double b);
    
    static double power(double base, double exp);
    static double square(double a);
    
    static unsigned long long factorial(int n);
    static unsigned long long fibonacci(int n);
    
    static std::string reverseString(const std::string& str);
    
    static double powerMToN(double m, double n);
    
    static double derivative(double (*func)(double), double x, double h = 1e-5);
    
    static double integral(double (*func)(double), double a, double b, int n = 1000);
};

#endif // MATH_LIBRARY_H
