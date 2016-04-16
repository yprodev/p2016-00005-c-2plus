#include <iostream>

using namespace std;

void swap(int &number1, int &number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main()
{
    /*
        Pointers

        Pointers are objects that point to another object.

        Just declaring a variable reserves the space in memory
        for the value for that variable.

        We can see that address of memory using the address
        operator / reference operator - &.

    int number1 = 1;
    cout << &number1 << endl;


        Using this operator we will see the memory address for
        value of one. We need that when we create pointers.

        A pointer points to an object.

        To create pointer we use * just before a variable name. We
        are using ptr- prefix to define that that variable is a
        pointer.

        We always assign reference of the memory address to the pointer.


    int number = 1;
    int *ptrNumber = &number;

    cout << ptrNumber << endl; // Displaying memory address
    cout << *ptrNumber << endl; // Displaying a value

    string name = "Jane";
    string *ptrName = &name;

    cout << ptrName << endl;
    cout << *ptrName << endl;


    */


    /*
        Pointer declaration and initialization
    */

    int *pNum; // Just one pointer
    int *pNumber1, *pNumber2; // a few in one line
    int *pNumber3, number3; // Mix pointers and variables of the same data type

    /*
        We may also place astrisk near the data type. But the problem is
        we need only to declare pointers with the same data type in that
        line.
    */

    string* pName1, pName2; // Only pointers in this line
    string *pName3, name4; // Pointer and simple variable


    /*
        Pointers initialization
    */

    int val = 64;
    int *pVal = &val;


    /*
        The address with no object = 0

        We want to initialize but we have no address. Doing like this is
        safer than doing like this - int *pVal;
        When you declare a pointer you should initialize it on the same
        line.
    */
    int *pVal1 = 0;

    /*
        Another way to assign a pointer is to assign it another pointer.
    */

    int *pVal2 = pVal;

    cout << pVal << endl;
    cout << pVal2 << endl;






    return 0;
}
