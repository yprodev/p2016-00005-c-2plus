#include <iostream>

using namespace std;

int maximum(int num1, int num2, int num3) {

    int largest;
    if (num1 > num2)
        largest = num2;
    else
        largest = num2;
    if (num3 > largest)
        largest = num3;
    return largest;


}

double ftoc(double temp) {
    return (temp - 32.0) * (5.0/9.0);
}


double ctof(double temp) {
    return (temp * (9.0/5.0) + 32.0);
}


int main()
{
    //cout << "Hello world!" << endl;
    /*

    int number1, number2, number3, max;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;
    max = maximum(number1, number2, number3);
    cout << "The maximum value is " << max << endl;

    */

    double fahrTemp, celsius;
    /*

    cout << "Enter a fahrenheit temperature: ";
    cin >> fahrTemp;
    celsius = ftoc(fahrTemp);
    cout << fahrTemp << " fahrenheit is equal to " << celsius << " celsius." << endl;

    */

    cout << "Enter a celsius temperature: ";
    cin >> celsius;
    fahrTemp = ctof(celsius);
    cout << celsius << " celsius is equal to " << fahrTemp << " fahrenheit." << endl;

    return 0;
}
