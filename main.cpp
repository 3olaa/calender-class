#include <iostream>
#include <Time.h>
#include <Appointment.h>
#include <DayAppointments.h>
#include <Calendar.h>

using namespace std;


int main()
{
    /*Time t1,t2;
    cout << "Enter the first time" << endl;
    cin >> t1;
    cout << t1 << endl;
    cout << "Enter the second time" << endl;
    cin >> t2;
    cout << t2 << endl;
    cout << (t1<t2) << endl;
    cout << (t1>t2) << endl;
    cout << (t1==t2) << endl;
    cout << (t1!=t2) << endl;*/

    /*Appointment A1,A2;
    cin >> A1;
    cout << A1 << endl;
    cin >> A2;
    cout << A2 << endl;
    cout << (A1<A2) << endl;
    cout << (A1>A2) << endl;
    cout << (A1<=A2) << endl;
    cout << (A1>=A2) << endl;
    cout << (A1==A2) << endl;
    cout << (A1!=A2) << endl;*/

    /*DayAppointments DA1, DA2, DA3;
    cin >> DA1;
    cout << DA1;
    cin >> DA2;
    cout << DA2;
    DA3 = DA1;
    cout << DA3;
    cout << (DA1==DA2) << endl;
    cout << (DA1!=DA2) << endl;
    cout << (DA1==DA3) <<endl;
    cout << (DA1!=DA3) <<endl;*/

    /*Calendar C1;
    cin >> C1;
    cout << C1;
    cout << (C1.days[1] == C1.days[2]);*/


    int choice, count1=0, count2=0;
    DayAppointments *day = new DayAppointments[100];
    Calendar *week = new Calendar[100];

    while(true){
        cout << "What do you want to do:\n"
             << "0) Exit.\n"
             << "1) Insert appointments for a specific day.\n"
             << "2) Insert appointments for multiple days in the same week.\n"
             << "3) Display appointments for a specific day.\n"
             << "4) Display appointments for multiple days in the same week.\n"
             << "5) Delete an appointment.\n"
             << "Your choice is: ";
        cin >> choice;
        if (choice == 0)
            return 0;
        else if(choice == 1){
            cin >> day[count1];
            count1 += 1;
        }
        else if(choice == 2){
            cin >> week[count2];
            count2 += 1;
        }
        else if(choice == 3){
            int displayDay;
            cout << "Which day you want to display: " << endl;
            for(int i=0; i<count1; i++)
                cout << i+1 << ") " << day[i].getWeekDay() << endl;
            cin >> displayDay;
            for(int i=0; i<count1; i++)
                if((displayDay-1) == i)
                    cout << day[i];
        }
        else if(choice == 4){
            int displayWeek;
            cout << "Which week you want to display: " << endl;
            for(int i=0; i<count2; i++)
                cout << i+1 << ") Week" << i+1 << endl;
            cin >> displayWeek;
            for(int i=0; i<count2; i++)
                if((displayWeek-1) == i)
                    cout << week[i];
        }

    }
    return 0;
}
