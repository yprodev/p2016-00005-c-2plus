#include <iostream>

using namespace std;

int main()
{
    /*

        Do-while statement

    int sum = 0;
    int num = 1;

    do {
        sum += num;
        ++num;
    } while (num < 11);

    cout << sum << endl;

    */



    /*
        Rewriting while loop into do-while statement
    */

    double balance, rate;
    int years = 0;
    balance = 5000;

    cout << "What is the interest rate? ";
    cin >> rate;
    while(balance < 10000) {
        balance *= rate;
        ++years;
    }

    cout << "It will take " << years << " years to reach $10,000.00" << endl;


    balance = 5000;
    rate = 0;
    years = 0;

    cout << "What is the interest rate? ";
    cin >> rate;

    do {
        balance *= rate;
        ++years;
    } while(balance < 10000);

    cout << "It will take " << years << " years to reach $10,000.00" << endl;



    return 0;
}
