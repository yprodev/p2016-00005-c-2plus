#include <iostream>

using namespace std;

int swap(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void reinit(int *val) {
    *val = 0;
}

void pswap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1 = 100;
    //cout << "num1: " << num1 << endl;
    //reinit(&num1);
    //cout << "num1: " << num1 << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "               Working with pswap function               " << endl;
    cout << "---------------------------------------------------------" << endl;

    int num2 = 200;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    pswap(&num1, &num2);

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;


    return 0;
}
