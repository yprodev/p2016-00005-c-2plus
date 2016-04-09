#include <iostream>
#include <vector>

using namespace std;

int sumVector(vector<int> vect) {
    int total = 0;
    for (int i = 0; i < vect.size(); ++i) {
        total += vect[i];
    }
    return total;
}

void displayVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " ";
    }
}

void curveGrades(vector<int> &vect, int amount) {
    for (int i = 0; i < vect.size(); ++i) {
        vect[i] += amount;
    }
}

int main()
{

    vector<int> grades;
    int total;
    grades.push_back(84);
    grades.push_back(77);
    grades.push_back(92);
    grades.push_back(89);
    grades.push_back(98);
    total = sumVector(grades);
    cout << "The total is: " << total;
    cout << endl << "The grades are: " << endl;
    displayVector(grades);
    cout << endl;
    curveGrades(grades, 5);
    cout << "======================================================" << endl;
    displayVector(grades);

    return 0;
}
