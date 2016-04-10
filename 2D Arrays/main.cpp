#include <iostream>

using namespace std;

int main()
{
    /*
        Creating 2D Arrays
        int numbers[rows][colomns]

    const int rows = 2;
    const int cols = 6;
    int numbers[rows][cols];

    int temps[rows][cols] = {
                             {87, 85, 89, 94, 88, 90},
                             {79, 96, 85, 88, 93, 91}
                            };

    // Creating nested for loop
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            numbers[r][c] = 0;
        }
    }

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            cout << temps[r][c] << " ";
        }
        cout << endl;
    }

    */


    const int rows = 5;
    const int cols = 5;

    int total = 0;
    double average = 0.0;
    int grades[rows][cols] = {
                              {87, 85, 89, 94, 88},
                              {67, 95, 89, 64, 68},
                              {77, 75, 59, 94, 81},
                              {97, 35, 86, 74, 82},
                              {79, 96, 85, 88, 93}
                             };


    for (int r = 0; r < rows; ++r) {
        cout << "Student: " << r + 1 << " ";
        for (int c = 0; c < cols; ++c) {
            cout << grades[r][c] << " ";
            total += grades[r][c];
        }
        average = total / cols;
        cout << " Average: " << average << endl;
        // Reseting total and average for each student
        total = 0;
        average = 0;
    }
    cout << endl;

    /*

        Controlling inner loop by outer and
        outer loop by inner.

    */

    for (int c = 0; c < cols; ++c) {
        cout << "Test: " << c + 1 << " ";
        for (int r = 0; r < rows; ++r) {
            cout << grades[r][c] << " ";
            total += grades[r][c];
        }
        average = total / rows;
        cout << " Average: " << average << endl;
        // Reseting total and average for each student
        total = 0;
        average = 0;
    }

    return 0;
}
