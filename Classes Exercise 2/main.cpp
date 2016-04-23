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
    // Here the compiler will call the default constructor.
    // Because we have do nothing at all.
    Calculator c;

    double opt1, opt2;
    char opt;

    while(true) {
        cout << "> ";
        cin >> opt1 >> opt >> opt2;
        cout << endl << c.calc(opt1, opt2, opt) << endl;
    }


    return 0;
}
