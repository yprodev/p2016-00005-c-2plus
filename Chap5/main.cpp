#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // New line
    cout << "Hello world!\n";
    cout << "\nHello world!\n";
    cout << "Hello world!" << "\n";

    // Tab character
    cout << "\tHello world!" << "\n";

    int day1, day2, day3;
    day1 = 45;
    day2 = 48;
    day3 = 50;

    cout << "Day     Temperature\n\n";
    cout << 1 << "     " << day1 << endl;
    cout << 2 << "     " << day2 << endl;
    cout << 3 << "     " << day3 << endl;

    // Using tabs
    cout << "Day\tTemperature\n\n";
    cout << 1 << "\t" << day1 << endl;
    cout << 2 << "\t" << day2 << endl;
    cout << 3 << "\t" << day3 << endl;

    /* Now we will try to solve problem with output data

            cout have some problems:
                numeric values precision problems
                spaces problems

    */
    double mounth1, mounth2, mounth3, mounth4;
    mounth1 = 1061.2363;
    mounth2 = 1073.47;
    mounth3 = 1071.6378;
    mounth4 = 1069.736;

    // We are setting presicion using iomanip library
    cout << setprecision(10);



    cout << "Mounth" << "\t" << "Reading" << endl << endl;
    cout << "     " << 1 << "\t" << mounth1 << endl;
    cout << "     " << 2 << "\t" << mounth2 << endl;
    cout << "     " << 3 << "\t" << mounth3 << endl;
    cout << "     " << 4 << "\t" << mounth4 << endl;

    int fieldLength = 15;
    cout << endl << endl << endl;
    // Setting field width with setw()
    cout << setw(5) << "Mounth" << setw(fieldLength) << "Reading" << endl << endl;
    cout << setw(5) << 1 << setw(fieldLength) << mounth1 << endl;
    cout << setw(5) << 2 << setw(fieldLength) << mounth2 << endl;
    cout << setw(5) << 3 << setw(fieldLength) << mounth3 << endl;
    cout << setw(5) << 4 << setw(fieldLength) << mounth4 << endl;

    return 0;
}
