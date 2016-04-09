#include <iostream>
// Including vector library
#include <vector>

using namespace std;

int main()
{
    vector<int> grades;
    int grade, total;
    double average;

    // If you want to sum some values remember
    // to assign start value of zero to the
    // total variable.
    total = 0;

    // Loop for collecting data
    for (int i = 1; i <= 5; ++i) {
        cout << "Enter a grade: ";
        cin >> grade;
        grades.push_back(grade);

    }

    // Loop for displaying data
    for (int i = 0; i < grades.size(); ++i) {
        total += grades[i];
        average = total / grades.size();
        cout << grades[i] << " ";
    }

    cout << "The average is " << average << " ";





    return 0;
}
