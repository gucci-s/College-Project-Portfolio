#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

float compute_mpg(float miles_travelled, float gallons)
{

	float mpg;

	mpg = miles_travelled / gallons;

	return mpg;

}
float compute_cost(float gallons)
{
	float cost;

	cost = gallons * 2.50f;

	return cost;
}
int main()
{
	float miles_travelled;
	float mpg;
	float gallons;
	float cost{};
	string dest_city;
	float total_cost_gas = 0.0f;

	while (!cin.eof())
	{
		cout << "Press ctrl + z tp stop";
		cout << endl;
		cout << "Enter destination city:  ";
		cin >> dest_city;
		cout << "Enter miles travelled:   ";
		cin >> miles_travelled;
		cout << "Enter gallons used:      ";
		cin >> gallons;
		cout << endl;

		total_cost_gas = total_cost_gas + cost;

		mpg = compute_mpg(miles_travelled, gallons);
		
		cost = compute_cost(gallons);

		cout << endl; 
		cout << "Destination city:        " << setw(10) << dest_city << endl;
		cout << "Total miles for trip:    " << setw(10) << miles_travelled << endl;
		cout << "Total cost for trip:    " << setw(10) << "$" << cost << endl;
		cout << endl;

	}

	cout << "Total cost of all trips: " << setw(10) << "$" << total_cost_gas << endl;

	system("pause");

	return 0;

}