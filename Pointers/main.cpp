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






        Pointer declaration and initialization


    int *pNum; // Just one pointer
    int *pNumber1, *pNumber2; // a few in one line
    int *pNumber3, number3; // Mix pointers and variables of the same data type


        We may also place astrisk near the data type. But the problem is
        we need only to declare pointers with the same data type in that
        line.


    string* pName1, pName2; // Only pointers in this line
    string *pName3, name4; // Pointer and simple variable



        Pointers initialization


    int val = 64;
    int *pVal = &val;



        The address with no object = 0

        We want to initialize but we have no address. Doing like this is
        safer than doing like this - int *pVal;
        When you declare a pointer you should initialize it on the same
        line.

    int *pVal1 = 0;


        Another way to assign a pointer is to assign it another pointer.


    int *pVal2 = pVal;

    cout << pVal << endl;
    cout << pVal2 << endl;



    int num = 64;
    int *pNum = &num;

    cout << pNum << endl; // undereferenced pointer
    cout << *pNum << endl; // dereferenced pointer



        Using pointers we can assign a new value to the object
        we have been pointing at by putting a dereferenced pointer
        on the left handside of an assignment statement.



    *pNum = 65;
    cout << *pNum << endl;
    cout << num << endl;


    */


    /*
        Copare pointers and references
    */

    int num1 = 64;
    int num2 = 65;

    int *pNum1 = &num1;
    int *pNum2 = &num2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "*pNum1: " << *pNum1 << endl;
    cout << "*pNum2: " << *pNum2 << endl;

    // Let's assign pointers to each other
    pNum1 = pNum2;

    /*
        Assigning pointer variable to another pointer variable changes only the
        pointer variables values that were assigned to that pointer variables.
        This assignment doesn't change any simple variable values.
    */

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "*pNum1: " << *pNum1 << endl;
    cout << "*pNum2: " << *pNum2 << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "                  WORKING WITH REFERENECES                " << endl;
    cout << "----------------------------------------------------------" << endl;


    /*
        Assigning reference variable to the reference variable changes the
        variables values that were assigned to that simple variables.
    */

    int &rNum1 = num1;
    int &rNum2 = num2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "rNum1: " << rNum1 << endl;
    cout << "rNum2: " << rNum2 << endl;

    rNum1 = rNum2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "rNum1: " << rNum1 << endl;
    cout << "rNum2: " << rNum2 << endl;


    return 0;
}
