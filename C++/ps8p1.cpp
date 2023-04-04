#include<iostream>
#include<iomanip>
using namespace std;

float compute_total(float subtotal, float dis_percent, float qty, float price)
{
	float total;

	subtotal = qty * price;

	if (subtotal > 10000)
		dis_percent = subtotal * 0.10;

	total = subtotal - dis_percent;

	return total;

}
int main()
{
	float total;
	float subtotal{};
	float dis_percent{};
	float price;
	float qty;
	float total_all = 0.0f;

	while (!cin.eof())
	{

		cout << "Enter ctrl + z to stop";
		cout << endl;
		cout << endl;
		cout << "Enter Quantity:   ";
		cin >> qty;
		cout << "Enter price:     " << "$";
		cin >> price;
		cout << endl;

		total = compute_total(subtotal, dis_percent, qty, price);

		cout << setprecision(2) << fixed;
		cout << "Quantity:       " << setw(15) << qty << endl;
		cout << "Price of each:  " << setw(10) << "$" << price << endl;
		cout << "Total:          " << setw(10) << "$" << total << endl;

		total_all = total_all + total;

	}
		
	cout << endl;
	cout << "End of entires please see total below:" << setw(10) << endl;
	cout << endl;
	cout << "Total of all entires:     " << setw(10) << "$" << total_all << endl;
	cout << endl;

	return 0;

}