#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//define variables
	string name_appliance;
	float cost_appliance;
	float cost_warranty;
	float total_appliance_warranty;

	// input phase
	cout << "Enter the name of the appliance: ";
	getline(cin, name_appliance);
	std::cout << "Enter cost of the appliance:  $";
	cin >> cost_appliance; 

	// process phase
	if (cost_appliance > 1000)
		cost_warranty = cost_appliance * 0.10;
	else
		cost_warranty = cost_appliance * 0.05; 

	total_appliance_warranty = cost_appliance + cost_warranty;

	// output phase
	cout << setprecision(2) << fixed;
	cout << "Name of Appliance          " << name_appliance << setw(8) << endl;
	cout << "Cost of Appliance          $" << cost_appliance << setw(8) << endl;
	cout << "Cost of Warranty           $" << cost_warranty << setw(8) << endl;
	cout << "Total                      $" << total_appliance_warranty << setw(8) << endl;

	system("pause");

	return 0;
}