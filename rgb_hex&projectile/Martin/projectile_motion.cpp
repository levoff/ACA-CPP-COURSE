#include <iostream>
#include <cmath>

int main ()
{
    float v0 = 0;
    float a = 0;
    float h = 0;
    float t = 0;
    float l = 0;
    float g = 9.81;
    while (1)
    {
        std::cout << "Enter the initial speed: ";
        std::cin >> v0;
        std::cout << "Enter the launch angle: ";
        std::cin >> a;
        a = a * M_PI / 180;
        t = (2 * v0 * sin(a)) / g;
        l = (v0 * v0 * sin(2 * a)) / g;
        h = g * t * t / 8;
        std::cout << "Maximum flight distance = " << l << '\n';
        std::cout << "Maximum flight altitude = " << h << '\n';
        std::cout << "Flight time = " << t << "\n\n";
    }
return 0;
}