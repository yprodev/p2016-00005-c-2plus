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

    void setDate(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

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

/*
    We need to do this overloading in the global scope area. If we do so inside
    class scope we always will need to compare some object just with that
    class, where we redefine the operator.
*/

// equality operator overloading
bool operator==(const Date &d1, const Date &d2) {

    /*
        We are using the getters because we are now outside the class definition.
    */
    return ((d1.getMonth() == d2.getMonth()) && (d1.getDay() == d2.getDay()) && (d1.getYear() == d2.getYear()));
}

/*
    We are going to get data from the input stream and we are gonna store in d
    and return that as the value of the function.
*/

// non-member function (non-class function)
istream &operator>>(istream &input, Date &d) {
    int month, day, year;
    char slash1, slash2;
    input >> month >> slash1 >> day >> slash2 >> year;
    // We are calling a Date constructor and storing that data in d
    d = Date(month, day, year);
    return input;

}

// non-member function (non-class function)
ostream &operator<<(ostream &output, const Date &d) {
    return output << d.getMonth() << "/" << d.getDay() << "/" << d.getYear();
}

int main()
{
    /*
        Testing operator overloading

    Date today(7,12,2014);
    Date tomorrow = today;
    tomorrow.addDay(1);
    if (today == tomorrow) {
        cout << "The same day!" << endl;
    } else {
        cout << "A different day!" << endl;
    }

    */

    Date today;
    cout << "Enter the date (mm/dd/yyyy): " << endl;
    cin >> today;
    cout << "Today is: ";
    cout << today << endl;

    return 0;
}
