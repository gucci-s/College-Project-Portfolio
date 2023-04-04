#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables

	float price_pound;
	float price_total;
	float qty_pounds;

	//Input

	cout << "Enter total pounds of apples:  ";
	cin >> qty_pounds;

	//Process

	if (qty_pounds > 100)
		price_pound = 0.10;
	else
		if (qty_pounds >= 50)
			price_pound = 0.25;
		else
			if (qty_pounds < 50)
				price_pound = 0.50;

	price_total = price_pound * qty_pounds;

	//Output

	cout << setprecision(2) << fixed;
	cout << "Price per pound:  " << setw(8) << price_pound << endl;
	cout << "Total:            " << setw(8) << price_total << endl;

	system("pause");

	return 0;











}