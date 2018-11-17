#include "DayAppointments.h"

DayAppointments::DayAppointments(){
    weekDay = "";
}


DayAppointments::~DayAppointments()
{

}


DayAppointments::DayAppointments(const DayAppointments& other)
{
    this->numOfAppointments = other.numOfAppointments;
    this->appointments = new Appointment[this->numOfAppointments];
    for(int i=0; i<other.numOfAppointments; i++)
        this->appointments[i] = other.appointments[i];
}


void DayAppointments::setWeekDay(string wd)
{
    weekDay = wd;
}


string DayAppointments::getWeekDay()
{
    return weekDay;
}


DayAppointments& DayAppointments::operator=(DayAppointments& DA)
{
    this->numOfAppointments = DA.numOfAppointments;
    this->appointments = new Appointment[this->numOfAppointments];
    for(int i=0; i<DA.numOfAppointments; i++)
        this->appointments[i] = DA.appointments[i];
    return *this;
}


istream& operator>>(istream& in, DayAppointments& DA){
    cout << "Enter the day: ";
    in >> DA.weekDay;
    cout << "Enter the number of appointments for this day: ";
    in >> DA.numOfAppointments;
    DA.appointments = new Appointment [DA.numOfAppointments];
    for(int i=0; i<DA.numOfAppointments; i++){
        b:
        cout << endl << "Enter appointment " << i+1 << endl;
        in >> DA.appointments[i];
        if(i>0)
            if(!(DA.appointments[i] > DA.appointments[i-1])){
                cout << "Overlapping appointments!" << endl << "Please re-enter this appointment" << endl;
                goto b;
            }
    }
    return in;
}


ostream& operator<<(ostream& out, DayAppointments& DA){
    out << "-You have " << DA.numOfAppointments << " appointments on " << DA.weekDay << " which are:" << endl;
    for(int i=0; i<DA.numOfAppointments; i++)
        out << "\t" << i+1 << ") " << DA.appointments[i];
    return out;
}


bool DayAppointments :: operator==(DayAppointments DA){
    if(numOfAppointments == DA.numOfAppointments){
        int counter=0;
        for(int i=0; i<numOfAppointments; i++)
            if(this->appointments[i] == DA.appointments[i])
                counter += 1;
        if(counter == numOfAppointments)
            return true;
        else
            return false;
    }
    else
        return false;
}


bool DayAppointments :: operator!=(DayAppointments DA){
    if(numOfAppointments == DA.numOfAppointments){
        int counter=0;
        for(int i=0; i<numOfAppointments; i++)
            if(this->appointments[i] == DA.appointments[i])
                counter += 1;
        if(counter == numOfAppointments)
            return false;
        else
            return true;
    }
    else
        return true;
}
