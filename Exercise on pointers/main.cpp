#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void buildArray(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1;
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void exchangeSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i+1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
                displayArray(arr, size);
                cout << endl;
            }
        }
    }
}

int main()
{

    const int size = 10;
    int numbers[size];

    buildArray(numbers, size);
    displayArray(numbers, size);

    cout << endl << endl;

    exchangeSort(numbers, size);

    cout << endl << endl;

    displayArray(numbers, size);

    return 0;
}
