#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159265;
    double area;
    int radius = 3;

    area = pi * radius * radius;
    cout << "The area of the circle with radius 3 is: " << area << endl;

    area = pi * pow(radius, 2);
    cout << "The area of the circle with radius 3 is: " << area << endl;
    cout << sqrt(144) << endl;
    cout << abs(1345) << " " << abs(-1345) << endl;
    // Modulus for doubles
    cout << fmod(28.4566, 3) << endl;



    return 0;
}
