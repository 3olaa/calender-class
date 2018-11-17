#include "Time.h"


using namespace std;


Time::Time()
{
    hour = 0;
    minute = 0 ;
}


void Time::setHour(int h)
{
    hour = h ;
}


void Time::setMinute (int m)
{
    minute = m;
}


void Time::setDayNight (string dn)
{
    daynight = dn;
}


int Time::getHour ()
{
    return hour;
}


int Time::getMinute ()
{
    return minute;
}


string Time::getDayNight ()
{
    return daynight;
}


istream& operator>> (istream& in, Time& t)
{
    cout << "Enter hours: ";
    in >> t.hour;
    cout << "Enter minutes: ";
    in >> t.minute;
    int daynight;
    cout << "Choose: " << endl << "1) AM" << endl << "2) PM" << endl;
    cin >> daynight;
    if(daynight == 1)
        t.daynight = "AM";
    else if(daynight == 2)
        t.daynight = "PM";
    return in;
}

ostream& operator<< (ostream& out, Time t)
{
    if(t.hour < 10)
        out << "0" << t.hour << ": ";
    else
        out << t.hour << ": ";
    if(t.minute < 10)
        out << "0" << t.minute;
    else
        out << t.minute;
    out << " " << t.daynight;
    return out;

}


bool Time::operator<(Time& t1)
{
    if(daynight != t1.daynight){
        if(((daynight == "AM") && (hour != 12)) || ((daynight == "PM") && (t1.hour == 12)))
            return true;
        else
            return false;
    }
    else{
        if (((hour < t1.hour) && (t1.hour != 12)) || ((hour != t1.hour) && (hour == 12)))
            return true;
        else if ((hour == t1.hour) && (minute < t1.minute))
            return true;
        else
            return false;
    }
}

bool Time::operator>(Time& t1)
{
    if(daynight != t1.daynight){
        if(((daynight == "PM") && (t1.hour != 12)) || ((daynight == "AM") && (hour == 12)))
            return true;
        else
            return false;
    }
    else{
        if (((hour > t1.hour) && (hour != 12)) || ((hour != t1.hour) && (t1.hour == 12)))
            return true;
        else if ((hour == t1.hour) && (minute > t1.minute))
            return true;
        else
            return false;
    }
}

bool Time::operator==(Time& t1)
{
    if((daynight == t1.daynight) && (hour == t1.hour) && (minute == t1.minute))
        return true;
    else
        return false;
}

bool Time::operator!=(Time& t1)
{
    if((daynight == t1.daynight) && (hour == t1.hour) && (minute == t1.minute))
        return false;
    else
        return true;
}
