#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//define variables
	string name_last;
	float number_dependents;
	float income_gross;
	float income_adjusted;
	float total_tax;
	float income_taxrate;

	// input phase
	cout << "Enter Last Name:      ";
	cin >> name_last;
	cout << "Number of Dependents: ";
	cin >> number_dependents;
	cout << "Gross Income:         $";
	cin >> income_gross;

	// process phase
	income_adjusted = income_gross - (number_dependents * 12000);

	if (income_adjusted > 50000)
		income_taxrate = 0.20f;
	else income_taxrate = 0.10f;

	total_tax = income_adjusted * income_taxrate;

	if (income_adjusted < 0)
		total_tax = 100;
	// note no else
	
	// output phase
	cout << setprecision(2) << fixed;
	cout << "Last Name:            " << name_last << setw(8) << endl;
	cout << "Number of Dependents: " << number_dependents << endl;
	cout << "Adjusted Income:      $" << income_adjusted << setw(8) << endl;
	cout << "Total Tax             $" << total_tax << setw(8) << endl;

	system("pause");

	return 0;
}