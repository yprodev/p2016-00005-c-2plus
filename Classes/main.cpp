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

int main()
{
    Name myName("Dan", "Mathew", "O'Salliwan");
    cout << myName.toString() << endl;
    return 0;
}
