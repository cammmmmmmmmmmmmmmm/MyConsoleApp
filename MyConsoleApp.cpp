// This program calculates your balance in a savings account, and displays a data report. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount, principal, interestRate, interestTotal;
    int timesCompounded;

    cout << "This is a program that will calculate your balance in a savings account. Please answer the following questions:" << endl << endl;

    cout << "How much was the principal deposit?" << endl;
    cin >> principal;
    cout << "What is the interest rate? Please enter it as a decimal." << endl;
    cin >> interestRate;
    cout << "How many times per year is it compounded?" << endl;
    cin >> timesCompounded;

    // Calculations for the total amount and the total interest:
    amount = (principal * (pow((1 + (interestRate / timesCompounded)), timesCompounded)));
    interestTotal = amount - principal;

    // This displays the interest rate, the number of times compounded per year, the principal, the interest, and the total amount in savings.
    cout << endl << setw(18) << left << "Interest Rate:" << setw(3) << right << ' ' << setw(8) << setprecision(2) << fixed << showpoint << interestRate * 100 << setw(1) << '%' << endl;
    cout << setw(18) << left << "Times Compounded:" << setw(3) << right << ' ' << setw(8) << timesCompounded << setw(1) << endl;
    cout << setw(18) << left << "Principal:" << setw(3) << right << '$' << setw(8) << setprecision(2) << fixed << showpoint << principal << setw(1) << endl;
    cout << setw(18) << left << "Interest:" << setw(3) << right << '$' << setw(8) << setprecision(2) << fixed << showpoint << interestTotal << setw(1) << endl;
    cout << setw(18) << left << "Amount in Savings:" << setw(3) << right << '$' << setw(8) << setprecision(2) << fixed << showpoint << amount << endl;

    return 0;
}
