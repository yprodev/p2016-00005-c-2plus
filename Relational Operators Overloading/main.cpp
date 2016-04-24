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

    return 0;
}
