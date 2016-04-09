#include <iostream>

using namespace std;

int main()
{
    /*
        Three types of initialization arrays

    int numbers[10];
    for (int i = 0; i < 10; ++i) {
        numbers[i] = i + 1;
    }

    int numbers1[10] = {1,2,3,4,5,6,7,8,9,10};

    int numbers2[10] = {1,2,3,4,5};
    */


    /*
        Accessing array data

        We can't use push_back() method and size() method
        with arrays. We need to assign a constant value.
    */

    /*
    const int size = 10;
    int numbers[size];

    numbers[0] = 1;
    numbers[1] = 2;

    for (int i = 2; i < 10; ++i) {
        numbers[i] = i + 1;
    }

    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += numbers[i];
    }

    cout << "The total is: " << total << endl;
    */

    /*

        Don't go beyond the upper bound of the array.
        You will get the random number from the memory.
        That's why we need to create constant value for
        array length.
    */

    /*

    const int size = 5;
    int grades[] = {100, 90, 80, 70, 60};
    int total = 0;
    double average;
    for (int i = 0; i < size; ++i) {
        total += grades[i];
    }
    average = total / size;
    cout << "The average grade is: " << average << endl;

    */


    /*
        You can create a string using array of chars
        (like in C language).
    */

    const int size = 3;
    char word[size] = {'b', 'o', 'b'};
    string rword;

    for (int i = size - 1; i >= 0; --i) {
        rword += word[i];
    }
    cout << rword;



    return 0;
}
