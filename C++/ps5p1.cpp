#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	//varibles
	
	float price_ext;
	float tax;
	float price_total;
	float qty_widgets;
	float price_subtotal;

	//input

	cout << "Enter quantity of widgets:   ";
	cin >> qty_widgets;

	//process

	if (qty_widgets > 10000)
		price_ext = 10;
	else
		if (qty_widgets >= 5000)
			price_ext = 20;
	else
		if (qty_widgets < 5000)
				price_ext = 30;

	price_subtotal = price_ext * qty_widgets;

	tax = price_subtotal * 0.07;

	price_total = price_subtotal + tax;

	//output

	cout << setprecision(2) << fixed;
	cout << "Extended Price:    $" << setw(8) << price_ext << endl;
	cout << "Total Tax:         $" << setw(8) << tax << endl;
	cout << "Total:             $" << setw(8) << price_total << endl;

	system("pause");

	return 0;

}

