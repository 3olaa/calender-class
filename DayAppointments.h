// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 1 - Problem 1
// Program: Appointments Calendar
// Author 1 and ID and group: Lauren Safwat - 20170203 - Group 8
// Author 2 and ID and group: Ola Sameh - 20170165 - Group 8
// Date:    17 November 2018

#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include <Appointment.h>
#include <iostream>

class DayAppointments
{
private:
    Appointment * appointments;
    int numOfAppointments;
    string weekDay;

public:
    /** Default constructor **/
    DayAppointments();

    /** Destructor **/
    virtual ~DayAppointments();

    /** Copy constructor **/
    DayAppointments(const DayAppointments& other);

    /** Setters **/
    void setWeekDay(string wd);

    /** Getters **/
    string getWeekDay();

    /** Input the appointments of a day **/
    friend istream& operator>>(istream& in, DayAppointments&);

    /** Output the appointments of a day **/
    friend ostream& operator<<(ostream& out, DayAppointments&);

    /** Overloading the equal operator to assign the appointments of a day to another day **/
    DayAppointments& operator=(DayAppointments&);

    /** Overloading the relational operators to compare 2 day appointments objects **/
    bool operator==(DayAppointments);
    bool operator!=(DayAppointments);
};

#endif // DAYAPPOINTMENTS_H
