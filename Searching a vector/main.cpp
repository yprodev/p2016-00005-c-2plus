#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void buildVector(vector<int> &vect) {
    srand(time(NULL));
    for (int i = 1; i <= 1000; ++i) {
        vect.push_back(rand() % 1000 + 1);
    }
}

int searchVector(vector<int> vect, int value) {
    for (int i = 0; i < vect.size(); ++i) {
        if (vect[i] == value) {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> numbers;
    buildVector(numbers);

    int found, numToSearch;

    cout << "Enter a numeric value you want to find: ";
    cin >> numToSearch;
    found = searchVector(numbers, numToSearch);
    if (found != -1) {
        cout << "The position is: " << found;
    } else {
        cout << "There is no such number.";
    }

    return 0;
}
