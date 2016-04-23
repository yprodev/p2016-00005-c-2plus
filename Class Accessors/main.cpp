#include <iostream>

using namespace std;

class Date {
    private:
    int month, day, year;

    public:

    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    Date(int m, int y) {
        month = m;
        day = 0;
        year = y;
    }

    Date() {
        month = 0;
        day = 0;
        year = 0;
    }

    // Creating accessor method
    void setDate(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    // Creating accessor method to change a piece of information
    void setMonth(int m) {
        if (m < 1 || m > 12) {
            cout << "Incorrect value for month!" << endl;
        } else {
            month = m;
        }
    }

    void setDay(int d) {
        day = d;
    }

    void setYear(int y) {
        year = y;
    }

    /*
        We are going to write our get methods. We are using
        int data type. So, all these get methods will return
        us int values.

    */

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void displayDate() {
        cout << month << "/" << day << "/" << year;
    }

    void displayDate2() {
        cout << getMonth() << "/" << getDay() << "/" << getYear();
    }

    void addDay(int n) {
        day += n;
    }

    void addMonth(int n) {
        month += n;
    }

    bool equals(Date dt){
        if ((month == dt.month) && (day == dt.day) && (year == dt.year)) {
            return true;
        } else {
            return false;
        }
    }
};


int main()
{

    Date today;
    today.setDate(4,21,2014);
    today.setMonth(13);

    cout << today.getMonth() << "/" << today.getDay() << "/" << today.getYear()<< endl;
    today.displayDate();

    cout << endl << " ------------------------- " << endl;
    today.addDay(5);
    today.displayDate();
    cout << endl << " ------------------------- " << endl;


    /*
        We can create new Date object from a current Date object.
    */

    Date tomorrow = today;
    tomorrow.displayDate();

    cout << endl << " ------------------------- " << endl;

    /*
        We can't use if statement like this:

            if(today == tomorrow)

        because '==' operator is not defined to work with our user-defined
        Date class. So, we need to overload the operator, also called the operator
        overloading.

        So, to compare to objects we need to write a function that will
        compare our two objects.
    */

    tomorrow.addDay(4);

    if(tomorrow.equals(today)) {
        cout << "The same day" << endl;
    } else {
        cout << "A different day" << endl;
    }

    return 0;
}
