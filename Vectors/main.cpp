#include <iostream>
// Including vector library
#include <vector>

using namespace std;

int main()
{
    /*

    vector<int> grades;
    int grade, total;
    double average;

    // If you want to sum some values remember
    // to assign start value of zero to the
    // total variable.
    total = 0;

    // Loop for collecting data
    for (int i = 1; i <= 5; ++i) {
        cout << "Enter a grade: ";
        cin >> grade;
        grades.push_back(grade);

    }

    // Loop for displaying data
    for (int i = 0; i < grades.size(); ++i) {
        total += grades[i];
        average = total / grades.size();
        cout << grades[i] << " ";
    }

    cout << "The average is " << average << " ";

    */



    /*
        Three ways of initializing a vector

        Before this include vector library in your program
        #include <vector>

    */

    /*
        Creating a vector of names
        There is no any data now. It's empty.

    vector<string> names;

    // This will provide an error
    // cout << "The first value is " << names[0] << endl;



        This also is empty. But we've reserved 10 spaces in memory for
        10 names inside this vector. Now we will not see any error even
        when it is empty.

    vector<string> names(10);
    cout << "The first value is " << names[0] << endl;

        The third way is to set the default value.



    vector<string> names(10,"");
    cout << "The first value is " << names[0] << endl;

    for (int i = 0; i < names.size(); ++i) {
        cout << i << " : " << names[i] << endl;
    }

    */



    /*
        Adding data into a vector
    */

    vector<string> names;

    names.push_back("David");
    names.push_back("Raymond");
    names.push_back("Cynthia");

    // Using subscript position
    names[0] = "David";
    names[1] = "Raymond";
    names[2] = "Cynthia";

    // Assigning default value
    vector<int> numbers(1000,0);





    return 0;
}
