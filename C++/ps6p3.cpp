#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()

{
	//variables

	string dest_city;
	float miles_to_dest = 0.0f;
	float gal_gas;
	int number_trips;
	float total_miles_traveled = 0.0f;
	float mpg;
	float total_trips = 0.0f;

	//input
	//before the loop

	cout << "Note: Please press ctrl + z to stop and total all" << endl;
	cout << endl;
	cout << "Enter Destination City (no spaces):  ";
	cin >> dest_city;
	cout << "Enter Miles to Destination:          ";
	cin >> miles_to_dest;
	cout << "Enter Gallons of Gas used on Trip:   ";
	cin >> gal_gas;
	cout << endl;

	//process
	//in the loop

	while (!cin.eof())
	{
		mpg = miles_to_dest / gal_gas;
		total_miles_traveled = total_miles_traveled + miles_to_dest;
		total_trips = total_trips + 1;

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Destion City:   " << setw(8) << dest_city << endl;
		cout << "MPG:             " << setw(8) << mpg << endl;
		cout << endl;

		cout << "Note: Please press ctrl + z to stop and total all" << endl;
		cout << endl;
		cout << "Enter Destination City (no spaces):  ";
		cin >> dest_city;
		cout << "Enter Miles to Destination:          ";
		cin >> miles_to_dest;
		cout << "Enter Gallons of Gas used on Trip:   ";
		cin >> gal_gas;
		cout << endl;

	}

	//output
	//after the loop

	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "Total Miles Travelled:   " << setw(8) << total_miles_traveled << endl;
	cout << "Total Number of Trips:   " << setw(8) << total_trips << endl;
	cout << endl;


	system("pause");

	return 0;

}