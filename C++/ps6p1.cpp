#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
	//variables

	float price;
	float discount_percent;
	float subtotal;
	float ext_price;
	float qty;
	float total_all_ext_price = 0.0f;
	float discount;

	//input
	//before the loop

	cout << "Enter quantity and price: (use ctl+z to stop):   ";
	cin >> qty >> price;
	cout << "Note: 10% discount on any quantities over 1,000";
	cout << endl;

	//process
	//in the loop
	while (!cin.eof())
	{
		if (qty > 1000)
			discount_percent = 0.10;
		else
			discount_percent = 0.00;

		subtotal = qty * price;
		discount = subtotal * discount_percent;
		ext_price = subtotal - discount;
		total_all_ext_price = total_all_ext_price + ext_price;

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Quantity:              " << setw(8) << qty << endl;
		cout << "Price per unit:       $" << setw(8) << price << endl;
		cout << "Extended Price:       $" << setw(8) << ext_price << endl;
		cout << "Extended price inlcudes total + discount if applicable." << endl;
		cout << endl;


		cout << endl;
		cout << "Enter quantity and price: (use ctl+z to stop):   ";
		cin >> qty >> price;


	}

	//output
	//after the loop

	cout << setprecision(2) << fixed;
	cout << "Total of all entries:       $" << setw(8) << total_all_ext_price << endl;



	system ("pause");

	return 0;

}