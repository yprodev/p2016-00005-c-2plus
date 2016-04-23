#include <iostream>

using namespace std;

int main()
{
    const int size = 4;
    int numbers[size] = {5,10,15,20};

    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }

    /*
        We can create a pointer to the first element of the array
    */

    int *pNumbers = &numbers[0];
    cout << endl << *pNumbers << endl;

    /*
        We are going to use pointer arithmetic.
        HOW NOT TO DO IT EXAMPLE:

            Because pointers pointing at addresses and we know that arrays
            the contigues addresses of memory. So, you would think that adding
            one to the dereferenced pointer that points at the first element
            of the array will point at the second element.

            *pNumbers + 1;

            We will get 6;

            And the reason of that because of the order of precedence. The
            dereferenced operator *pNumbers has a higher presedence than
            the addition operator.

            So, instead of getting the next element of the array, we get the
            first element of the array plus 1.

            So, to get the next element of the array, we need to put pointer
            plus one inside parentacies - *(pNumbers + 1).


    */

    cout << endl << *pNumbers << " " << *(pNumbers + 1) << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "                  Loop With Pointers                     " << endl;
    cout << "---------------------------------------------------------" << endl;

    // Loop with pointers is much faster than the other methods

    for (int i = 0; i < size; ++i) {
        cout << *(pNumbers + i) << endl;
    }

    /*
        The name of the array is actually is a pointer to the first value of the array.
    */

    cout << endl << *numbers << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "               Using Array Name as a Pointer             " << endl;
    cout << "---------------------------------------------------------" << endl;

    for (int i = 0; i < size; ++i) {
        cout << *(numbers + i) << " ";
    }

    return 0;
}
