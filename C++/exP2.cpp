#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variables
	float tip;
	float total;
	float meal_cost;

	// input phase
	cout << "Enter cost for your meal:   $";
	cin >> meal_cost;

	//process phase
	if (meal_cost > 25.00f)
		tip = meal_cost * 0.20f;
	else
		tip = 3.00f;

	total = tip + meal_cost;

	//output phase
	cout << setprecision(2) << fixed;
	cout << "Cost of meal:   $" << setw(8) << meal_cost << endl;
	cout << "Tip is:         $" << setw(8) << tip << endl;
	cout << "Total:          $" << setw(8) << total << endl;

	system("pause");

	return 0;
}