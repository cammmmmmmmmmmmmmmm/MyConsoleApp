// This program will calculate how much the user will be charged to deliver a package of a given weight over a given distance.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double ratePerMile, weight, distance, packageCharge;

	cout << "Welcome to the Fast Freight Train Company!\n \n";
	cout << "Please enter the weight of your package. The maximum weight we can ship is 20 kg.\n";

	cin >> weight;
	if ((weight <= 0) || (weight > 20)) //Validates that weight is between 0 and 20
		cout << "Invalid Input. Please restart the program and enter a value within the accepted weight range.\n";
	else
		cout << "Please enter the distance you want your package shipped! The farthest distance we can ship is 3,000 miles.\n";

	cin >> distance;
	if ((distance <= 3000) && (distance > 0)) // validate distance is between 0 and 3000
	{
		// Assignes the rates per mile for different weights
		if (weight <= 2.0)
			ratePerMile = 1.10; 
		else if (weight <= 6.0)
			ratePerMile = 2.20;
		else if (weight <= 10)
			ratePerMile = 3.70;
		else if (weight <= 20)
			ratePerMile = 4.80;

		packageCharge = ratePerMile * distance; // Calculates the total charge for the package

		// Displays the total package charge, the distance, and the dollar rate per mile
		cout << "Your delivery will cost " << setprecision(2) << fixed << showpoint << packageCharge;
		cout << " dollars to send " << setprecision(2) << fixed << showpoint << distance;
		cout << " miles at a rate of " << setprecision(2) << fixed << showpoint << ratePerMile;
		cout << " dollars per mile.\n";
	}
	else
		cout << "Invalid Input. Please restart the program and enter a value within the accepted distance range.\n";
		
	return 0;
}
