#ifndef CALENDAR_H
// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 1 - Problem 1
// Program: Appointments Calendar
// Author 1 and ID and group: Lauren Safwat - 20170203 - Group 8
// Author 2 and ID and group: Ola Sameh - 20170165 - Group 8
// Date:    17 November 2018

#define CALENDAR_H
#include <DayAppointments.h>


class Calendar
{
    private:
        DayAppointments * days;
        int numOfDays;

    public:
        /** Default Constructor **/
        Calendar();

        /** Destructor **/
        virtual ~Calendar();

        /** Input the appointments of a week **/
        friend istream& operator>>(istream& in, Calendar&);

        /** Output the appointments of a week **/
        friend ostream& operator<<(ostream& out, Calendar&);
};

#endif // CALENDAR_H
