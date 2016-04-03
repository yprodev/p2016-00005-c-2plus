#include <iostream>

using namespace std;

int main()
{

    /*
        While loop intro


    int count = 1;
    while (count <= 10) {
        cout << "Hello World!" << endl;
        ++count;
    }

    */

    /*
        Two categories of while loops

            Count-Controlled
            Sentinel-Controlled

    double balance, rate;
    int years, count;
    cout << "What is the starting balance? ";
    cin >> balance;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "How many years to calculate interest? ";
    cin >> years;
    count = 1;
    while (count <= years) {
        balance *= rate;
        cout << count << ": " << balance << endl;
        ++count;
    }

    cout << "After " << years << " years your balance will be " << balance << "." << endl;

    */

    /*
    // Using decrement
    double balance, rate;
    int years, count;
    cout << "What is the starting balance? ";
    cin >> balance;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "How many years to calculate interest? ";
    cin >> years;
    count = 1;
    while (years > 0) {
        balance *= rate;
        cout << years << ": " << balance << endl;
        --years;
    }

    cout << "After " << years << " years your balance will be " << balance << "." << endl;

    */

    /*
    int num1, num2, product, count;
    product = 0;
    count = 1;
    cout << "What is the first number? ";
    cin >> num1;
    cout << "What is the second number? ";
    cin >> num2;
    while (count <= num1) {
        product += num2;
        ++count;
    }
    cout << num1 << " times " << num2 << " = " << product << endl;

    */


    /*
        Sentinel controll loop is looking for a special value
    */

    int grade, gradeTotal, numGrades;
    double average;
    numGrades = gradeTotal = 0;
    cout << "Enter a grade: ";
    cin >> grade;
    while (grade != -1) {
        gradeTotal += grade;
        ++numGrades;
        cout << "Enter a grade: ";
        cin >> grade;
    }
    average = gradeTotal / numGrades;
    cout << "The average grade is: " << average << endl;



    return 0;

}
