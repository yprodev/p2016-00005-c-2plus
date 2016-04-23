#include <iostream>

using namespace std;

/*
    Creating a class

    Classes have public part and private part.
*/

class Name {
    private:
    string first, middle, last;

    public:
    /*
        This section of a class will include an interface. The interface
        is the way when the user of a class interacts with a class. Think
        of it mostly in terms of functions. We are going to use two types
        of functions - a constructor and a toString functions.
    */
    Name(string fname, string mname, string lname) {
        first = fname;
        middle = mname;
        last = lname;
    }

    string toString() {
        return first + " " + middle + " " + last;
    }

}; // Always put a semi-colon to tell a compiler where the class ends

class Date {
    private:
    int month, day, year;

    public:
    // int month, day, year; - not here, to secure your data


    /*
        Constructor always starts from the name of a class
        For parameters using just letters is OK.

        We can't use two constructor at the same time, because
        class constructors can be overloaded. That means we could
        have two fucntions with the same name but with different
        number of parameters.

    */

    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    // Anther constructor for another format
    Date(int m, int y) {
        month = m;
        day = 0; // We assign here a zero value
        year = y;
    }

    // Default constructor
    Date() {
        // Default construcor defines just default values for each data variavle
        month = 0;
        day = 0;
        year = 0;
    }
};

int main()
{
    Name myName("Dan", "Mathew", "O'Salliwan");
    cout << myName.toString() << endl;

    Date d1;

    Date today(4,21,2014);
    Date yesterday(4,2014);
    Date tomorrow;
    return 0;
}
