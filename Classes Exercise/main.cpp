#include <iostream>

using namespace std;

class Time {
    private:
    int hours, minutes, seconds;

    public:
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time(int h, int m) {
        hours = h;
        minutes = m;
        seconds = 0;
    }

    Time(int m) {
        minutes = m;
        hours = 0;
        seconds = 0;
    }

    Time() {
        minutes = 0;
        hours = 0;
        seconds = 0;
    }

    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void setHours(int h) {
        if (hours <= 23) {
            hours = h;
        } else {
            hours = 0;
        }
    }

    void setMinutes(int m) {
        if (minutes <= 59) {
            minutes = m;
        } else {
            minutes = 0;
        }
    }

    void setSeconds(int s) {
        if (seconds <= 59) {
            seconds = s;
        } else {
            seconds = 0;
        }
    }

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    void showTime() {
        if (seconds > 0) {
            cout << hours << ":"
                 << minutes << ":"
                 << seconds;
        } else {
            cout << hours << ":"
                 << minutes;
        }
    }

    void increment(int n) {
        minutes += n;
        if (minutes > 59) {
            ++hours;
            minutes -= 60;
        }
    }

};

int main()
{
    Time theTime(6,0,0);
    theTime.showTime();
    cout << endl;
    theTime.setMinutes(26);
    theTime.showTime();

    for (int i = 1; i < 61; ++i) {
        theTime.increment(1);
    }

    cout << endl;
    theTime.showTime();




    return 0;
}
