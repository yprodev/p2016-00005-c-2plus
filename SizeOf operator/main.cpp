#include <iostream>

using namespace std;

int main()
{
    cout << "The size of an integer is " << sizeof(int) << endl; // 4
    cout << "The size of a double is " << sizeof(double) << endl; // 8
    cout << "The size of a string is " << sizeof(string) << endl; // 4

    int num = 1234;
    cout << endl << "The size of a num is " << sizeof(num) << endl; // 4

    int *pNum = &num;
    cout << "The size of the pointer pNum is " << sizeof(pNum) << endl;
    cout << "The size of a value pointed at by pNum is " << sizeof(*pNum) << endl;

    int numbers[] = {5,10,15,20,25};
    int size = sizeof(numbers) / sizeof(*numbers);

    cout << endl;

    cout << "Size of numbers: " << sizeof(numbers) << endl; // 16 (5 integers values - 5 * 4 = 20)
    cout << "Size of pointer numbers: " << sizeof(*numbers) << endl; // 4
    cout << "Size is: " << size << endl; // 5

    return 0;
}
