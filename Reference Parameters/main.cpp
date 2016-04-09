#include <iostream>

using namespace std;

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int number1, number2;
    number1 = 13;
    number2 = 12;

    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;

    /*
        The process of exchanging values we called swap.
        So, I have to have a third variable to perform a
        swap.
    */

    int temp = number1;
    // then
    number1 = number2;
    number2 = temp;

    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;

    /*
        We want a function to perform that swap. And a function
        that perform that swap can not be value returning function,
        because we are working with two values.
    */

    return 0;
}
