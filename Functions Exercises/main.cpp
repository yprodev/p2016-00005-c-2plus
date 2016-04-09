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

int main()
{
    char grade;
    cout << "Enter a letter grade: ";
    cin >> grade;
    cout << "A " << grade << " earns "
         << qualityPoints(grade) << " quality points. " << endl;

    return 0;
}
