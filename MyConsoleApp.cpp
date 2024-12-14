// MyConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Original recipe: 1.5 cup sugar, 1 cups butter, & 2.75 cups flour make 48 cookies

    double ratioSugar, ratioButter, ratioFlour;
    int cookieAmount; //This is the desired amount of cookies

    //These ratios will be used to calculate how many cups of sugar, butter, and flour will be needed to make the desired amount of cookies
    ratioSugar = 1.5 / 48.0;
    ratioButter = 1.0 / 48.0;
    ratioFlour = 2.75 / 48.0;

    cout << "How many cookies would you like to make?\n";
    cin >> cookieAmount;
    
    ratioSugar *= cookieAmount; //The amount of sugar needed is now stored in ratioSugar
    ratioButter *= cookieAmount; //The amount of butter needed is now stored in ratioSugar
    ratioFlour *= cookieAmount; //The amount of flour needed is now stored in ratioFlour

    cout << "To make " << static_cast<int>(cookieAmount) << " of cookies, you will need:\n";
    cout << ratioSugar << " cups of sugar, " << ratioButter << " cups of butter, and " << ratioFlour << " cups of flour!\n";
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
