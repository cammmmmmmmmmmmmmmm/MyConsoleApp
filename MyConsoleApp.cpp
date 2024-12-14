// MyConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 309, b = 597, c; //These are the random numbers the student will have to add.
    c = a + b; //This stores the sum of the two numbers.

    cout << "Take a moment to add these two numbers. Press the Enter key to check the answer." << endl;

    cout << setw(5) << a << endl;
    cout << left << '+' << right << setw(4) << b << endl;
    cout << setw(5) << "_____" << endl;
    
    cin.get();

    cout << setw(5) << c;
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
