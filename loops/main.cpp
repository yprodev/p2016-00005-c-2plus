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

    */

    /*
        Results controlled loop


    double balance, rate;
    int years, target;
    years = 0;
    cout << "What is your begining balance: ";
    cin >> balance;
    cout << "What is your annual interest rate: ";
    cin >> rate;
    cout << "What is the target balance: ";
    cin >> target;
    while (balance < target) {
        balance *= rate;
        ++years;
    }

    cout << "It will take " << years
         << " to reach the target balance of "
         << target << "." << endl;
    */

    /*
        for loop - always count controlled

    for (int i = 0; i < 11; i++) {
        cout << i << " ";
    }

    */

    /*

    double balance, rate;
    int years;
    cout << "What is your begining balance: ";
    cin >> balance;
    cout << "What is your annual interest rate: ";
    cin >> rate;
    cout << "How many years to calculate: ";
    cin >> years;
    for (int i = 1; i <= years; ++i) {
        balance *= rate;
    }
    cout << "You will get: " << balance << endl;

    */

    int num1, num2, product;
    product = 0;

    cout << "What is the first number? ";
    cin >> num1;
    cout << "What is the second number? ";
    cin >> num2;

    for (int i = 1; i <= num1; ++i) {
        product += num2;
    }

    cout << "result: " << product << endl;







    return 0;

}
