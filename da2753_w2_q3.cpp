#include <iostream>
using namespace std;

const int HOURS_IN_A_DAY = 24;
const int MINUTES_IN_24HRS = 1440;
const int MINUTES_IN_AN_HOUR = 60;

int main()
{
    // Total 
    int totalDays, totalMinutes, totalHours, carryOverDays,
    carryOverHours, carryOverMinutes, remainderMinutes;
    // JOHN
    int daysWorkedJohn, hoursWorkedJohn, minutesWorkedJohn;
    // BILL
    int daysWorkedBill, hoursWorkedBill, minutesWorkedBill;

    cout << "please enter the number of days John has worked: ";
    cin >> daysWorkedJohn;
    cout << "please enter the number of hours John has worked: ";
    cin >> hoursWorkedJohn;
    cout << "please enter the number of minutes John has worked: ";
    cin >> minutesWorkedJohn;
    cout << endl;
    cout << "please enter the number of days Bill has worked: ";
    cin >> daysWorkedBill;
    cout << "please enter the number of hours Bill has worked: ";
    cin >> hoursWorkedBill;
    cout << "please enter the number of minutes Bill has worked: ";
    cin >> minutesWorkedBill;

    // Minutes
    totalMinutes = minutesWorkedBill + minutesWorkedJohn + remainderMinutes;
    carryOverMinutes = totalMinutes / MINUTES_IN_AN_HOUR;
    remainderMinutes = totalMinutes % MINUTES_IN_AN_HOUR;

    // Hours
    totalHours = hoursWorkedBill + hoursWorkedJohn + carryOverHours + carryOverMinutes;
    carryOverDays = totalHours / HOURS_IN_A_DAY;
    carryOverHours = totalHours % HOURS_IN_A_DAY;

    // Days
    totalDays = daysWorkedBill + daysWorkedJohn + carryOverDays;
   
   cout << "The total time both of them worked together is: " << totalDays << " days " << carryOverHours << " hours " << remainderMinutes << " minutes." << endl;

   cout << carryOverMinutes << endl;
   cout << remainderMinutes << endl;
}