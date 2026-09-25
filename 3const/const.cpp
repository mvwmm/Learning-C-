#include <iostream>

int main() {

    const double PI = 3.1415;
    const double RADIUS = 10;
    double circumference = 2 * PI * RADIUS;
    const int LIGHT_SPEED = 299792458;

    std::cout << "The circumference of the circle is: " << circumference << "cm" << '\n';
    std::cout << "The speed of Light is: " << LIGHT_SPEED << "km/hr" << '\n';
    return 0;
}

// const = constant