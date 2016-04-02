#include <iostream>

using namespace std;

int main()
{
    int number;
    /*
    cin >> number;
    cout << number << endl;
    */

    /*
    In this case space will be a delimeter

        int number1, number2;
        cin >> number1 >> number2;
        cout << number1 << endl << number2 << endl
    */

    int number1, number2, result;
    cout << "Enter the first integer: ";
    cin >> number1;
    cout << "Enter the second integer: ";
    cin >> number2;
    result = number1 + number2;
    cout << "Here is the sum " << result << endl;



    return 0;
}
