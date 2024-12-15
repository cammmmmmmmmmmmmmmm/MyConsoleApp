// This Geometry calculator can be used to find the area of a circle, rectangle, or triangle.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int choice; 
	double area, radius, length, width, base, height;
	const double PI = 3.14159;

	//This displays the menu
	cout << "Geometry Calculator" << endl;
	cout << setw(4) << right << "1. " << setw(33) << left << "Calculate the Area of a Circle" << endl;
	cout << setw(4) << right << "2. " << setw(33) << left << "Calculate the Area of a Rectangle" << endl;
	cout << setw(4) << right << "3. " << setw(33) << left << "Calculate the Area of a Circle" << endl;
	cout << setw(4) << right << "4. " << setw(33) << left << "Quit" << endl;
	cout << setw(4) << right << ' ' << setw(33) << left << "Enter your choice (1-4):" << endl;

	cin >> choice;

	//These are the four equations depending on which shape the user wants to calculate the area of
	switch (choice)
	{
		//Case 1 calculates the area of a circle
		case 1:
			cout << "Calculate the Area of a Circle:\n";
			cout << "What is the radius of the circle?\n";
			cin >> radius; 

			(area = (PI * (pow(radius, 2)))); //Calculates area

			if (radius > 0)
				cout << "The area of the circle is " << setprecision(2) << fixed << showpoint << area; //Displays result
			else 
				cout << "Sorry, please restart the program and enter a positive number.\n"; //Error message for validating input

			break;

		// Case 2 calculates the area of a rectangle
		case 2:
			cout << "Calculate the Area of a Rectangle:\n";
			cout << "What is the length of the rectangle?\n";

			cin >> length;
			if (length <= 0)
				cout << "Sorry, please restart the program and enter a positive number.\n"; //Validates input
			else
				cout << "What is the width of the rectangle?\n";

			cin >> width;
			if (width <= 0)
				cout << "Sorry, please restart the program and enter a positive number.\n"; // Validates input
			else
			{
				area = (length * width); // calculates area of a rectangle
				cout << "The area of the rectangle is " << setprecision(2) << fixed << showpoint << area;  //Displays result
			}
			break;

		// Case 3 calculates the area of a triangle
		case 3:
			cout << "Calculate the Area of a Triangle:\n";
			cout << "What is the base of the triangle?\n";

			cin >> base;
			if (base <= 0) //Validates input
				cout << "Sorry, please restart the program and enter a positive number.\n";
			else
				cout << "What is the height of the triangle?\n";

			cin >> height;
			if (height <= 0) //Validates input
				cout << "Sorry, please restart the program and enter a positive number.\n";
			else
			{
				area = (base * height * 0.5); //Calculates area of triangle
				cout << "The area of the rectangle is " << setprecision(2) << fixed << showpoint << area; //Displays result
			}
			break;

		// Case 4 is the Exit option
		case 4:
			cout << "The program has finished running, please exit out of the window.\n"; 
			break;

		// Stops program is someone enters a number aside from 1-4
		default:
			cout << "You did not choose any of the 4 options, please restart the program.\n";
	}

	return 0;
}
