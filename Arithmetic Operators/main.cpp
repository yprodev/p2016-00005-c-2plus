#include <iostream>

using namespace std;

int main()
{
    int number1, number2, result1;
    number1 = 22;
    number2 = 2;
    result1 = number1 + number2; // Addition - 24
    cout << result1 << endl;
    result1 = number1 - number2; // Subtraction - 20
    cout << result1 << endl;
    result1 = number1 * number2; // Multiplication - 44
    cout << result1 << endl;
    result1 = number1 / number2; // Division - 11
    cout << result1 << endl;
    result1 = number1 % number2; // Modulus (remainder) oparation - 0
    cout << result1 << endl;

    double number3, number4, result2;
    result2 = number3 + number4;
    result2 = number3 - number4;
    result2 = number3 * number4;
    result2 = number3 / number4;

    /*
        Using modulus for doubles will give you an error.
    */
    // result2 = number3 % number4;
    cout << endl << endl;

    /* Order of Precedence */
    result1 = number1 + number2 * 10;
    cout << endl << result1 << endl;











    return 0;
}
