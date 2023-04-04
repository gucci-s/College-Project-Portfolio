#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define variables
	float qty;
	float price_item;
	float tax;
	float price_total;
	float price_extended;

	// input phase
	cout << "Enter desired quantity: ";
	cin >> qty;

	// process phase
	{if (qty < 1000)
		price_item = 5;
	else price_item = 3; }

	{price_extended = price_item * qty;
	tax = price_extended * 0.07f;
	price_total = price_extended + tax; }
	
	// output phase
	cout << setprecision(2) << fixed;
	cout << "Quantity         " << setw(8) << qty << endl;
	cout << "Unit Price      $" << setw(8) << price_item << endl;
	cout << "Extended Price  $" << setw(8) << price_extended << endl;
	cout << "Tax             $" << setw(8) << tax << endl;
	cout << "Total           $" << setw(8) << price_total << endl;

	system("pause");
	

	return 0;
}