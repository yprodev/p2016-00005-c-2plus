#include <iostream>

using namespace std;

class Calculator {
    public:
    double add(double op1, double op2) {
        return op1 + op2;
    }

    double sub(double op1, double op2) {
        return op1 - op2;
    }

    double mult(double op1, double op2) {
        return op1 * op2;
    }

    double div(double op1, double op2) {
        return op1 / op2;
    }

    double calc(double op1, double op2, char op3) {
        if (op3 == '+')
            return add(op1, op2);
        else if (op3 == '-')
            return sub(op1, op2);
        else if (op3 == '*')
            return mult(op1, op2);
        else if (op3 == '/')
            return div(op1, op2);
        else
            return -1;
    }
};

int main()
{
    Calculator c;

    double opt1, opt2;
    char opt;


    /*

    char resp = 'y';

    while(resp != 'n') {
        cout << "> ";
        cin >> opt1 >> opt >> opt2;
        cout << endl << c.calc(opt1, opt2, opt) << endl;
        cout << "Another (y/n): ";
        cin >> resp;
    }

    */

    char resp;

    do {
        cout << "> ";
        cin >> opt1 >> opt >> opt2;
        cout << endl << c.calc(opt1, opt2, opt) << endl;
        cout << "Another (y/n): ";
        cin >> resp;
    } while(resp != 'n');



    return 0;
}
