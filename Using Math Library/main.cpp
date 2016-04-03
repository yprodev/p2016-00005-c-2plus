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

    /*
        Mixing data types
    */

    cout << endl << 3 / 2 << endl; // We will get 1

    /*
        Operation between two integers will give us the integer result.
        To correct that situation we need to change one of integers to
        float number.
    */

    cout << 3 / 2.0 << endl; // We will get 1


    int number;
    double rate;
    number = 2;
    rate = 1.0345;
    // Reassigning number variable with a different data type
    number = rate;
    cout << endl << number << endl; // We will see 1 - narrowing conversion

    rate = 2;
    cout << rate << endl; // widening conversion - double data type withoug float point and numbers after that
    // Implicit conversion
    // Explicit conversion - type cast

    // Example of type cast
    // In this way we are converting rate to an integer data type
    number = (int)rate;
    rate = (double)number;
    cout << number << " " << rate << endl;




    return 0;
}
