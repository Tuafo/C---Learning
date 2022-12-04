#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    // PI = 519.37; const means that the variable can't be change
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 2560;
    const int HEIGTH = 1250;

    std::cout << circumference << "cm";

    return 0;
}

