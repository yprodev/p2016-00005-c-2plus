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

    // Additional operator overloading
    void operator+(int n) {
        day += n;
    }

    // Substruction operator overloading
    void operator-(int n) {
        day -= n;
    }

    Date &operator+=(int n) {
        day += n;
        return *this;
    }

    Date &operator=(const Date &d) {
        month = d.month;
        day = d.day;
        year = d.year;
        // returning the pointer to this
        return *this;
    }

};

bool operator>(const Date &d1, const Date &d2) {
    if (d1.getYear() > d1.getYear()) {
        return true;
    } else if ((d1.getYear() == d2.getYear()) && (d1.getMonth() > d2.getMonth())) {
        return true;
    } else if ((d1.getYear() == d2.getYear()) && (d1.getMonth() == d2.getMonth()) && (d1.getDay() > d2.getDay())) {
        return true;
    } else {
        return false;
    }
}

bool operator>=(const Date &d1, const Date &d2) {
    if (d1.getYear() > d1.getYear()) {
        return true;
    } else if ((d1.getYear() == d2.getYear()) && (d1.getMonth() > d2.getMonth())) {
        return true;
    } else if ((d1.getYear() == d2.getYear()) && (d1.getMonth() == d2.getMonth()) && (d1.getDay() > d2.getDay())) {
        return true;
    } else if ((d1.getYear() == d2.getYear()) && (d1.getMonth() == d2.getMonth()) && (d1.getDay() == d2.getDay())) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    Date today(4,14,2014);
    Date tomorrow(4,14,2014);

    /*
        Working with relational operators overloading

    if(tomorrow > today) {
        cout << "Tomorrow is greater than today." << endl;
    } else {
        cout << "Today is greter than tomorrow." << endl;
    }

    cout << "----------------------------------------------------------" << endl;

    if(tomorrow >= today) {
        cout << "Tomorrow is greater than or equal to today" << endl;
    } else {
        cout << "Not equal and greater than tomorrow" << endl;
    }

    */

    /*
        Working with arithmetic operators overloading

        If we write like this we will get an error (in case of working with
        overloaded arithmetic operators), because we didn't overload an
        assignment operator - '='.

            today = today + 3;

        But we can write like this:

            today + 3;
    */

    cout << today.getDay() << endl;
    today + 3;
    cout << today.getDay() << endl;
    today - 1;
    cout << today.getDay() << endl;

    Date tomorrow2;
    tomorrow2 = today;
    cout << endl;
    cout << tomorrow2.getDay() << endl;

    return 0;
}
