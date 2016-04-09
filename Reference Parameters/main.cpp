#include <iostream>

using namespace std;

/*
    The reference is a direct link to the memory location
    that stores the value of the memory. So, rather then
    passing copies, we are passing LINKS TO THE MEMORY LOCATION
    THEMSELVES WHAT ARE CALLED REFERENCES.

    We may write in two ways:

    void swap(int &num1, int &num2) {
        ...
    }

    OR

    void swap(int& num1, int& num2) {
        ...
    }

*/

void swap(int &num1, int &num2) {
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


        This will not change our values because of function design.
        When we pass values to the function we are passing just
        copies of these data values that are the paremeters.

        Copies are literaly the copies made in memory of the value is
        stored in the variable and that is used for the data value
        that is passed to the function.

        swap(number1, number2);

    */
    swap(number1, number2);
    /*
        So here after calling the swap function number1 variable
        number2 variable are not changed, because the compiler is
        still looking at the memory location where original value
        is stored.

        The solution is to rewrite the swap function. So, we are
        going to call pass by value parameters. We are going to
        pass parameters by reference (int &num1).
    */
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;

    /*
        We want a function to perform that swap. And a function
        that perform that swap can not be value returning function,
        because we are working with two values.
    */

    return 0;
}
