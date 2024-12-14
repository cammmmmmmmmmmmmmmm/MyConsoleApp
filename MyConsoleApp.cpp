// MyConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount, principal, interestRate, timesCompounded, interestTotal;

    cout << "This is a program that will calculate your balance in a savings account. Please answer the following questions:" << endl;

    cout << "How much was the principal deposit?" << endl;
    cin >> principal;
    cout << "What is the interest rate? Please enter it as a decimal." << endl;
    cin >> interestRate;
    cout << "How many times per year is it compounded?" << endl;
    cin >> timesCompounded;

    amount = (principal * (1 + (pow((interestRate / timesCompounded), timesCompounded))));
    interestTotal = amount - principal;

    cout << amount << endl;
    cout << interestTotal << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
