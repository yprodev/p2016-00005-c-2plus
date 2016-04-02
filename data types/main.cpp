#include <iostream>

using namespace std;

int main()
{
    int num = 2000000000;
    cout << num << endl;

    unsigned int num2 = 3000000000;
    cout << num2 << endl;

    cout << "Int can store up to " << sizeof(int) << " bytes" << endl;
    cout << "Unsigned int can store up to " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Float can store up to " << sizeof(float) << " bytes" << endl;
    cout << "Double can store up to " << sizeof(double) << " bytes" << endl;

    /* Variable declarations */
    int salary; // variable declaration statement
    string firstName;
    double rate;

    salary = 40000; // variable assignment statement
    rate = .2 * .3;
    firstName = "Mary";

    int age = 23; // initializating statement

    string middleName, lastName;
    middleName = "Anne";
    lastName = "Brown";

    return 0;
}
