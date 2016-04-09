#include <iostream>

using namespace std;

void Heading(string name, string date) {

    cout << "*****************************************************************" << endl;
    cout << "* Name: " << name << "\t\t\t\t\t\t" << "*" << endl;
    cout << "* Date: " << date << "\t\t\t\t\t\t" << "*" << endl;
    cout << "*****************************************************************" << endl;

}

int main()
{
    Heading("Nike McArtur", "07/29/2016");
    // cout << "Hello world!" << endl;
    return 0;
}
