#include <iostream>
using namespace std;

int main()
{
	//define variables
	float price_item;
	float discount_percent;
	float total_discountamount;
	float total_discountprice;

	// input phase
	cout << "Enter price of the item  $";
	cin >> price_item;
	cout << "Enter percent of discount  " << "%";
	cin >> discount_percent;

	// process phase
	total_discountamount = price_item * discount_percent / 100;
	total_discountprice = price_item - total_discountamount;

	// output phase
	cout << "Amount of discount is  $" << total_discountamount << endl;
	cout << "Total discounted price is  $" << total_discountprice << endl;

	return 0;
}
