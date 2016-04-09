#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

void displayVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " ";
    }
}

int main()
{
    // Random number generator function is time seeded
    srand(time(NULL));

    vector<int> numbers;
    int number;
    for (int i = 1; i <= 100; ++i) {
        number = rand() % 100 + 1;
        numbers.push_back(number);
    }
    cout << endl;
    displayVector(numbers);

    return 0;
}
