#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

/*
void buildVector(vector<int> &vect) {
    srand(time(NULL));
    for (int i = 1; i <= 1000; ++i) {
        vect.push_back(rand() % 1000 + 1);
    }
}
*/
void buildVector(vector<int> &vect, int numItems) {
    srand(time(NULL));
    for (int i = 1; i <= numItems; ++i) {
        vect.push_back(rand() % 1000 + 1);
    }
}

/*
int searchVector(vector<int> vect, int value) {
    //for (int i = 0; i < vect.size(); ++i) {
    //    if (vect[i] == value) {
    //        return i;
    //    }
    //}
    //return -1;

    int found = -1;
    found = vect.at(value);
    return found;
}
*/


void displayVector (vector<int> vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " ";
    }
}

void displayVectorS (vector<string> vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " ";
    }
}


int main()
{
    /*

    vector<int> numbers;
    buildVector(numbers);

    int found, numToSearch;

    cout << "Enter a numeric value you want to find: ";
    cin >> numToSearch;
    //found = searchVector(numbers, numToSearch);
    found = numbers.at(numToSearch);
    if (found != -1) {
        cout << "The position is: " << found;
    } else {
        cout << "There is no such number.";
    }
    */

    /*
        Sorting vectors

        You will need to include library called <algorithm>

    vector<int> numbers;
    buildVector(numbers, 10);
    displayVector(numbers);
    cout << endl << "==============================================" << endl;
    sort(numbers.begin(), numbers.end());
    displayVector(numbers);
    cout << endl << "==============================================" << endl;

    */

    vector<string> names;
    names.push_back("Raymond");
    names.push_back("David");
    names.push_back("Cynthia");
    names.push_back("William");
    names.push_back("Mikky");

    displayVectorS(names);
    cout << endl << "==============================================" << endl;
    sort(names.begin(), names.end());
    displayVectorS(names);
    cout << endl << "==============================================" << endl;


    return 0;
}
