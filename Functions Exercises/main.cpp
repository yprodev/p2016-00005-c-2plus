#include <iostream>

using namespace std;

int qualityPoints(char letterGrade) {
    int qPoints;
    if (letterGrade == 'A')
        qPoints = 4;
    else if (letterGrade == 'B')
        qPoints = 3;
    else if (letterGrade == 'C')
        qPoints = 2;
    else if (letterGrade == 'D')
        qPoints = 1;
    else
        qPoints = 0;
    return qPoints;
}

string getInitials(string first, string middle, string last) {
    string firstInit, middleInit, lastInit;
    firstInit = first.substr(0,1);
    middleInit = middle.substr(0,1);
    lastInit = last.substr(0,1);

    return firstInit + middleInit + lastInit;
}

double calc(double operand1, double operand2, char oper) {
    double result;
    if (oper == '*') {
        return operand1 * operand2;
    }
    else if (oper == '/') {
        return operand1 / operand2;
    }
    else if (oper == '+') {
        return operand1 + operand2;
    }
    else if (oper == '-') {
        return operand1 - operand2;
    }
    else {
        cout << "We don't know this kind of operator." << endl;
    }
}

int main()
{
    /*

    char grade;
    cout << "Enter a letter grade: ";
    cin >> grade;
    cout << "A " << grade << " earns "
         << qualityPoints(grade) << " quality points. " << endl;



    // ==================================================================
    string firstName, middleName, lastName;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your middle name: ";
    getline(cin, middleName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Your initials are "
         << getInitials(firstName, middleName, lastName) << ". " << endl;

    */

    double opt1, opt2;
    char op;

    cout << "Enter expression: ";
    cin >> opt1 >> op >> opt2;

    while(true) {
        cout << "Result: " << calc(opt1, opt2, op) << endl;
        cout << "Enter expression: ";
        cin >> opt1 >> op >> opt2;
    }

    return 0;
}
