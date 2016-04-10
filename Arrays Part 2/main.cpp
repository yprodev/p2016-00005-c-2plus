#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void buildArrray(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1;
    }
}

void displayArray (int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

void curveGrades (int arr[], int size, int amount) {
    for (int i = 0; i < size; ++i) {
        arr[i] += amount;
    }
}

int maxGrade (int arr[], int size) {
    int maxValue = arr[0];
    int position = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            position = i;
        }
    }
    return position;
}

int minGrade (int arr[], int size) {
    int minValue = arr[0];
    int position = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            position = i;
        }
    }
    return position;
}

int main()
{
    const int size = 10;
    int grades[size];
    buildArrray(grades, size);
    displayArray(grades, size);
    cout << endl << "======================================" << endl;
    curveGrades(grades, size, 5);
    displayArray(grades, size);
    cout << endl << "======================================" << endl;
    int maxPosition = maxGrade(grades, size);
    int minPosition = minGrade(grades, size);
    cout << "The largest grade at position: " << maxPosition << endl;
    cout << "The largest grade is: " << grades[maxPosition] << endl;
    cout << "The lowest grade is: " << grades[minPosition] << endl;
    return 0;
}
