#include "Appointment.h"

Appointment::Appointment(){}


istream& operator>>(istream& in, Appointment& A)
{
    a:
    cout << "Start time: " << endl;
    in >> A.Start;
    cout << "End time: " << endl;
    in >> A.End;
    if(!(A.End > A.Start)){
        cout << "Invalid Appointment" << endl << "Please re-enter the start time and end time" << endl;
        goto a;
    }
    return in;
}


ostream& operator<<(ostream& out, Appointment A)
{
    out << "Your appointment is from " << A.Start << " to " << A.End << endl;
    return out;
}


bool Appointment::operator<=(Appointment A)
{
    if(*this < A || *this == A)
        return true;
    else
        return false;
}


bool Appointment::operator>=(Appointment A)
{
    if(*this > A || *this == A)
        return true;
    else
        return false;
}


bool Appointment::operator<(Appointment A)
{
    if((End < A.Start) || (End == A.Start))
        return true;
    else
        return false;
}


bool Appointment::operator>(Appointment A)
{
    if((Start > A.End) || (Start == A.End))
        return true;
    else
        return false;
}


bool Appointment::operator==(Appointment A)
{
    if(Start == A.Start && End == A.End)
        return true;
    else
        return false;

}


bool Appointment::operator!=(Appointment A)
{
    if(Start != A.Start || End != A.End)
        return true;
    else
        return false;
}
