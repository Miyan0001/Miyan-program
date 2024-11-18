#include <iostream>
#include <cmath>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error: Division by zero" << std::endl;
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

double power(double a, double b) {
    return pow(a, b);
}

double squareRoot(double a) {
    if (a < 0) {
        std::cout << "Error: Negative number" << std::endl;
        return -1;
    }
    return sqrt(a);
}

bool isEven(int a) {
    return a % 2 == 0;
}

bool isOdd(int a) {
    return a % 2 != 0;
}

double calculate(std::string operation, double a, double b) {
    if (operation == "add") {
        return add(a, b);
    } else if (operation == "subtract") {
        return subtract(a, b);
    } else if (operation == "multiply") {
        return multiply(a, b);
    } else if (operation == "divide") {
        return divide(a, b);
    } else if (operation == "modulus") {
        return modulus(a, b);
    } else if (operation == "power") {
        return power(a, b);
    } else if (operation == "sqrt") {
        return squareRoot(a);
    } else {
        std::cout << "Error: Invalid operation" << std::endl;
        return -1;
    }
}

int main() {
    double a = 10, b = 5;
    std::cout << "Addition: " << calculate("add", a, b) << std::endl;
    std::cout << "Subtraction: " << calculate("subtract", a, b) << std::endl;
    std::cout << "Multiplication: " << calculate("multiply", a, b) << std::endl;
    std::cout << "Division: " << calculate("divide", a, b) << std::endl;
    std::cout << "Modulus: " << calculate("modulus", a, b) << std::endl;
    std::cout << "Power: " << calculate("power", 2, 3) << std::endl;
    std::cout << "Square Root: " << calculate("sqrt", 16, 0) << std::endl;
    std::cout << "Is 10 even? " << (isEven(10) ? "Yes" : "No") << std::endl;
    std::cout << "Is 5 odd? " << (isOdd(5) ? "Yes" : "No") << std::endl;
    return 0;
}