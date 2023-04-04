#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables

	float total_weight;
	float pound_rate;
	float total;


	//Input

	cout << "Enter total weight:  ";
	cin >> total_weight;

	//Process

	if (total_weight > 100)
		pound_rate = 0.50;
	else
		if (total_weight >= 30)
			pound_rate = 0.25;
		else
			if (total_weight >= 20)
				pound_rate = 0.20;
			else
				if (total_weight < 20)
					pound_rate = 0.10;

	total = total_weight * pound_rate;

	//Output

	cout << setprecision(2) << fixed;
	cout << "Total weight:    " << setw(8) << total_weight << endl;
	cout << "Rate per pound: $" << setw(8) << pound_rate << endl;
	cout << "Total:          $" << setw(8) << total << endl;

	system("pause");

	return 0;











}