#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
	// varibles
	 
	float part_number;
	float qty_part;
	float cost_unit;
	float total_cost;
	
	//input

	cout << "Enter part number (10, 50, 55, 70, 99) and quantity: ";
	cin >> part_number >> qty_part;

	//process

	if (part_number == 10 && qty_part > 1000)
		cost_unit = 1;
	else
		if (part_number == 99 && qty_part > 500)
			cost_unit = 2;
		else
			cost_unit = 5;

	total_cost = cost_unit * qty_part;

	//output

	
	cout << "Part Number:   " << setw(9) << part_number << endl;
	cout << setprecision(2) << fixed;
	cout << "Cost per unit: $" << setw(8) << cost_unit << endl;
	cout << "Total Cost:    $" << setw(8) << total_cost << endl;

	system("pause");

	return 0;
}