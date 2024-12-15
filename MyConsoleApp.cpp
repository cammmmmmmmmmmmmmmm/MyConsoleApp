// This program will calculate the number of days in a month for a given year.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int month, year, days;
    bool leapYear = false;

    cout << left << setw(23) << "Enter a month (1-12):";
    cin >> month;

    // This validates the input so you can't enter outside a range of 1-12.
    (month < 1 || month > 12) ? (cout << "Invalid input. Pleaser restart the program.\n") : (cout << left << setw(23) << "Enter a year:");

    cin >> year;

    // This determines if it is a leap year.
    if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0)))
        leapYear = true;

    // This checks the number of days in a month.
    if (((month % 2 == 1) && (month < 8)) || ((month > 7) && (month % 2 == 0))) //If the value of the month is odd and less than 8, or even and greater than 7, it has 31 days.
        days = 31;
    else if (month != 2) // If the month is even and less than 8, or odd and greater than 7, and the value isn't 2, there are 30 days. 
        days = 30;
    else if (leapYear && (month == 2)) // If it is a leap year and the month is February, there are 29 days.
        days = 29;
    else
        days = 28; // If it is not a leap year, and the month is February, there are 28 days.

    cout << left << "There are " << days << " days in this month." << endl;
    
    return 0;
}
