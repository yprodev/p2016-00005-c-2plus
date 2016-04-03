#include <iostream>

using namespace std;

int main()
{
    double operand1, operand2, result;
    char op;
    cout << "Enter an expression: ";
    cin >> operand1 >> op >> operand2;
    if (op == '*') {
        result = operand1 * operand2;
        cout << "Result is: " << result << endl;
    } else if (op == '/') {
        result = operand1 / operand2;
        cout << "Result is: " << result << endl;
    } else if (op == '-') {
        result = operand1 - operand2;
        cout << "Result is: " << result << endl;
    } else if (op == '+') {
        result = operand1 + operand2;
        cout << "Result is: " << result << endl;
    } else {
        cout << "Bad expression." << endl;
    }



    return 0;
}
