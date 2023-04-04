#include <iostream>
using namespace std;

int main()
{
	//define variables
	float bep, fixed_costs, price_per_unit, cost_per_unit;
	
	// input phase
	cout << "Enter fixed costs  ";
	cin >> fixed_costs;
	cout << "Enter price per unit  ";
	cin >> price_per_unit;
	cout << "Enter cost per unit  ";
	cin >> cost_per_unit;

	// process phase
	bep = fixed_costs / (price_per_unit - cost_per_unit);

	// output phase
	cout << "You need to sell  " << bep << " to break even";

	return 0;
}
