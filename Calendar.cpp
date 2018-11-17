#include "Calendar.h"

Calendar::Calendar()
{

}

Calendar::~Calendar()
{

}


istream& operator>>(istream& in, Calendar& C){
    cout << "Enter the number of days: ";
    in >> C.numOfDays;
    C.days = new DayAppointments[C.numOfDays];
    cout << "Enter your week appointments" << endl;
    for(int i=0; i<C.numOfDays; i++){
        cout << "Day " << i+1 << " :" << endl;
        in >> C.days[i];
    }
    return in;
}


ostream& operator<<(ostream& out, Calendar& C){
    cout << "Your appointments for this week are:" << endl << endl;
    for(int i=0; i<C.numOfDays; i++)
        out << C.days[i] << endl;
    return out;
}
