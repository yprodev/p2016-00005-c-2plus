#include <iostream>

using namespace std;

int main()
{
    /*
        Relational Operators

    string myPassword = "letmein";
    cout << (myPassword == "password") << endl; // 0 - False
    cout << (myPassword != "password") << endl; // 1 - True

    int hoursWorked = 47;
    cout << endl << (hoursWorked > 40) << endl; // 1- True
    cout << (hoursWorked >= 47) << endl; // 1- True

    double hourlyRate = 25.00;
    cout << endl << (hourlyRate < 25) << endl; // 0 - False
    cout << (hourlyRate < 25.00) << endl; // 0 - False
    cout << (hourlyRate <= 25.00) << endl; // 1 - True

    */


    /*
        Logical Operators

    int hoursWorked = 40;
    double hourlyRate = 9.75;
    cout << ((hoursWorked < 1) || (hoursWorked > 56)) << endl; // 0 - False
    cout << ((hoursWorked <= 40) && (hourlyRate <= 10.00)) << endl; // 1 - True
    cout << !(hoursWorked == 40) << endl; // 0 - False

    */

    /*
        Simple IF Statement

    int hoursWorked;
    double rate, grossPay;
    cout << "Enter the hours worked: ";
    cin >> hoursWorked;
    cout << "Enter the rate of pay: ";
    cin >> rate;
    if (hoursWorked <= 40)
    {
        grossPay = hoursWorked * rate;
    }
    if (hoursWorked > 40)
    {
        grossPay = (40 * rate) + ((hoursWorked - 40) * (rate * 1.5));
    }
    cout << "Gross pay is: " << grossPay << endl;

    */

    /*
        If else statement

    int hoursWorked;
    double rate, grossPay;
    cout << "Enter the hours worked: ";
    cin >> hoursWorked;
    cout << "Enter the rate of pay: ";
    cin >> rate;
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * rate;
    }
    else {
        grossPay = (40 * rate) + ((hoursWorked - 40) * (rate * 1.5));
    }
    cout << "Gross pay is: " << grossPay << endl;

    */

    /*
        Nested if else statement
    */

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18) {
        cout << "You can't vote yet!" << endl;
        if (age < 16) {
            cout << "You can't drive yet either." << endl;
        } else {
            cout << "You can drive." << endl;
        }
    } else {
        cout << "You can vote." << endl;
        if (age < 21) {
            cout << "You can't drink." << endl;
        } else {
            cout << "..and you can drink." << endl;
        }
    }


    return 0;
}
