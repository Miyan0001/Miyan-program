#include <iostream>
#include <cmath>
#include <tuple>

// Fungsi untuk menghitung akar persamaan kuadrat ax^2 + bx + c = 0
std::tuple<double, double> solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        return std::make_tuple(NAN, NAN);  // Tidak ada akar riil
    }
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    return std::make_tuple(root1, root2);
}

// Operasi logika
bool logicalAnd(bool a, bool b) {
    return a && b;
}

bool logicalOr(bool a, bool b) {
    return a || b;
}

bool logicalNot(bool a) {
    return !a;
}

int main() {
    double a = 1, b = -3, c = 2;
    auto [root1, root2] = solveQuadratic(a, b, c);
    
    std::cout << "Roots of the quadratic equation: " << root1 << ", " << root2 << std::endl;

    bool val1 = true, val2 = false;
    std::cout << "Logical AND: " << logicalAnd(val1, val2) << std::endl;
    std::cout << "Logical OR: " << logicalOr(val1, val2) << std::endl;
    std::cout << "Logical NOT: " << logicalNot(val1) << std::endl;
    
    return 0;
}