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

    result1 = (number1 + number2) * 10;
    cout << result1 << endl;

    result1 = 12 / 2 * 3 + 6 -1;
    cout << result1 << endl;

    result1 = 12 / 2 * ((3 + 6) -1);
    cout << result1 << endl;

    int grade1, grade2, grade3;
    double average;
    grade1 = 74;
    grade2 = 82;
    grade3 = 88;
    average = (grade1 + grade2 + grade3) / 3;
    cout << endl << average << endl;










    return 0;
}
