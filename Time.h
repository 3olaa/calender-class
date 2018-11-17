// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 1 - Problem 1
// Program: Appointments Calendar
// Author 1 and ID and group: Lauren Safwat - 20170203 - Group 8
// Author 2 and ID and group: Ola Sameh - 20170165 - Group 8
// Date:    17 November 2018

#ifndef TIME_H
#define TIME_H
#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    string daynight;

public:
    /** Constructor **/
    Time();

    /** Setters **/
    void setHour(int h);
    void setMinute(int m);
    void setDayNight(string dn);

    /** Getters **/
    int getHour();
    int getMinute();
    string getDayNight();

    /** Input time **/
    friend istream& operator>>(istream& in, Time&);

    /** Output time **/
    friend ostream& operator<<(ostream& out, Time) ;

    /** Overloading relational operators to compare 2 time objects **/
    bool operator<(Time&);
    bool operator>(Time&);
    bool operator==(Time&);
    bool operator!=(Time&);
};

#endif // TIME_H
