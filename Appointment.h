// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 1 - Problem 1
// Program: Appointments Calendar
// Author 1 and ID and group: Lauren Safwat - 20170203 - Group 8
// Author 2 and ID and group: Ola Sameh - 20170165 - Group 8
// Date:    17 November 2018

#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include "Time.h"
#include <iostream>


class Appointment
{
private:
    Time Start;
    Time End;

public:
    /** Constructor **/
    Appointment();

    /** Input an appointment **/
    friend istream& operator>>(istream& in, Appointment&);

    /** Output an appointment **/
    friend ostream& operator<<(ostream& out, Appointment);

    /** Overloading the relational operators to compare 2 appointment objects **/
    bool operator<=(Appointment);
    bool operator>=(Appointment);
    bool operator<(Appointment);
    bool operator>(Appointment);
    bool operator==(Appointment);
    bool operator!=(Appointment);

    /** Deleting an appointment **/

};

#endif // APPOINTMENT_H
