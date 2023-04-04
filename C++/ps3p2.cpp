#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define variables
	char a;
	float item;
	float qty;
	float price_item;
	float price_total;
	float price_extended;

	// input phase
	cout << "Enter which item A or B: ";
	cin >> item;
	cout << "Enter desire quantity  ";
	cin >> qty;

	// process phase
	{if (item == 'a')
		price_item = 10;
	else price_item = 20; }

	{price_extended = price_item * qty; }

	// output phase
	cout << setprecision(2) << fixed;
	cout << "Item             " << setw(8) << item << endl;
	cout << "Unit Price      $" << setw(8) << price_item << endl;
	cout << "Extended Price  $" << setw(8) << price_extended << endl;

	system("pause");

	return 0;
}