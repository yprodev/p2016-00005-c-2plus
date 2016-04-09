#include <iostream>

using namespace std;

bool isEven(int number) {
    return ((number % 2) == 0);
}

int main()
{
    // cout << "Hello world!" << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num))
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;


    return 0;
}
