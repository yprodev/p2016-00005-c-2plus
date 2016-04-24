#include <iostream>

using namespace std;

int main()
{
    char letterGrade;
    cout << "Enter your letter grade: ";
    cin >> letterGrade;

    switch(letterGrade) {
        case 'A':
            cout << "..is in the range from 90 to 100." << endl;
            break;
        case 'B':
            cout << "..is in the range from 80 to 90." << endl;
            break;
        case 'C':
            cout << "..is in the range from 70 to 80." << endl;
            break;
        case 'D':
            cout << "..is in the range from 60 to 70." << endl;
            break;
        case 'F':
            cout << "..is in the range from 0 to 59." << endl;
            break;
        default:
            cout << "Don't recognize an input.";
    }




    return 0;
}
