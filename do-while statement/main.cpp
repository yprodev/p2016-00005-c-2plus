#include <iostream>

using namespace std;

int main()
{
    /* Do-while statement */

    int sum = 0;
    int num = 1;

    do {
        sum += num;
        ++num;
    } while (num < 11);

    cout << sum << endl;

    /*

    */


    return 0;
}
