// MyConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program calculates how much higher the ocean level will be at different years.

#include <iostream>
using namespace std;

int main()
{
    float oceanLevelRate = 1.5;
    int time1 = 5, time2 = 7, time3 = 10;
    float oceanLevel1, oceanLevel2, oceanLevel3;

    oceanLevel1 = oceanLevelRate * time1;
    oceanLevel2 = oceanLevelRate * time2;
    oceanLevel3 = oceanLevelRate * time3;

    cout << "The ocean level will be " << oceanLevel1 << " millimeters higher than the current ocean level in " << time1 << " years.\n";
    cout << "The ocean level will be " << oceanLevel2 << " millimeters higher than the current ocean level in " << time2 << " years.\n";
    cout << "The ocean level will be " << oceanLevel3 << " millimeters higher than the current ocean level in " << time3 << " years.\n";

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
