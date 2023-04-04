#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables

	float salary_annual;
	float tax_rate{};
	float tax_amount;
	float tax_percentage;

	//Input

	cout << "Enter annual salary:  ";
	cin >> salary_annual;

	//Process

	if (salary_annual > 100000)
		tax_rate = 0.40f;
	else
		if (salary_annual >= 50000)
			tax_rate = 0.35f;
		else
			if (salary_annual < 50000)
				tax_rate = 0.25;

	if (tax_rate == 0.40f)
		tax_percentage = 40;
	else
		if (tax_rate == 0.35f)
			tax_percentage = 35;
		else
			if (tax_rate == 0.25f)
				tax_percentage = 25;

	tax_amount = salary_annual * tax_rate;

	//Output

	cout << "Tax Rate %:       " << tax_percentage << "%" << endl;

	cout << setprecision(2) << fixed;
	cout << "Annual Salary:    $" << setw(8) << salary_annual << endl;
	cout << "Total tax owed:   $" << setw(8) << tax_amount << endl;
	system("pause");

	return 0;











}