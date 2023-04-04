#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Functions (like variables) need to be defined first

float compute_mpg(float miles_travelled, float gallons) //header of float function
{
	//variables no defined yet

	float mpg;

	mpg = miles_travelled / gallons;
	
	return mpg; //return matched varible type of header similar to return 0 for int main


}
int main()
{
	float mpg;
	string city;
	float miles_travelled; //distincts this from float function will be defined by main and float function
	float gallons;
	int c = 0;
	float total_miles = 0.0f;

	cout << "Enter ctrl + z to stop";
	cout << endl;
	cout << endl;
	cout << "Enter Destination City:           ";
	cin >> city;
	cout << "Enter miles travelled:            ";
	cin >> miles_travelled;
	cout << "Enter gallons of gasoline used:   ";
	cin >> gallons;
	cout << endl;

	while (!cin.eof())
	{

		// calling statement
		mpg = compute_mpg(miles_travelled, gallons);

		//output after each entry

		cout << setprecision(2) << fixed;
		cout << "Destination City: " << setw(10) << city << endl;
		cout << "MPG for Trip:     " << setw(10) << mpg << endl;

		total_miles = total_miles + miles_travelled;
		c = c + 1;

		cout << endl;
		cout << "Enter ctrl + z to stop";
		cout << endl;
		cout << "Enter Destination City:           ";
		cin >> city;
		cout << "Enter miles travelled:            ";
		cin >> miles_travelled;
		cout << "Enter gallons of gasoline used:   ";
		cin >> gallons;
		cout << endl;


	}// end of loop

	//after loop

	cout << endl;
	cout << "Total miles travelled: " << setw(10) << total_miles << endl;
	cout << "Number of trips made:  " << setw(10) << c << endl;
	cout << endl;

	system("pause");

	return 0;

}