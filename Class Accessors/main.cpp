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

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear(){
        return year;
    }

    void displayDate() {
        cout << month << "/" << day << "/" << year;
    }

    void displayDate2() {
        cout << getMonth() << "/" << getDay() << "/" << getYear();
    }

};


int main()
{

    Date today;
    today.setDate(4,21,2014);
    today.setMonth(13);

    cout << today.getMonth() << "/" << today.getDay() << "/" << today.getYear()<< endl;
    today.displayDate();
    return 0;
}
