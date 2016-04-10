#include <iostream>

using namespace std;

int main()
{
    /*
        Creating 2D Arrays
        int numbers[rows][colomns]
    */
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


    return 0;
}
