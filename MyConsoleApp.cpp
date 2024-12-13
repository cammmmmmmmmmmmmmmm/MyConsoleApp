// MyConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This project calculates how many customers purchased one or more energy drinks, and how many prefer citrus-flavored energy drinks.

#include <iostream>
using namespace std;

int main()
{
    int customersTotal = 16500, customersPurchase, customersCitrus;
    float purchasePercentage = 0.15, citrusPercentage = 0.58;

    customersPurchase = customersTotal * purchasePercentage;
    customersCitrus = customersPurchase * citrusPercentage;

    cout << "Approximately " << customersPurchase << " customers in the survey purchase one or more energy drinks per week.\n";
    cout << "Approximately " << customersCitrus << " cutomers in the survey prefer citrus-flavored energy drinks.\n";

    return 0;
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
