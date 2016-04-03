#include <iostream>

using namespace std;

int main()
{
    /*
        Relational Operators
    */

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
    return 0;
}
