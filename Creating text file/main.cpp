#include <iostream>
// We are need to include file stream library
#include <fstream>

using namespace std;

int main()
{

    /*

        First of all we need to declare right data type to
        work with files. For output file that data type is
        'ofstream' - stands for output file stream.

        Then we need to provide a name for our file. This is
        a class so we have a constructor for ofstream objects.
        And that constructor has two parameters. The first one
        is a path, where we want the file in.

        The second is a constant that points how we want to
        represent the work with the file. In this case we are
        working with output so we type 'ios::out' - so the
        compiler knows that we are openning this file for an
        output.

    */

    ofstream outFile("/home/usr/grades.txt", ios::out);

    outFile << 100 << endl;
    outFile << 90 << endl;
    outFile << 80 << endl;
    outFile << 70 << endl;

    /*
        We should close the file. And to do that we should
        call the function .close() on that file.
    */
    outFile.close();

    return 0;
}
