#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define variables
	float number_books;
	float cost_book;
	float total_order;
	float total_shipping;
	float total_order_shipping;

	// input phase
	cout << "Enter number of books to order:  ";
	cin >> number_books;
	cout << "Enter cost per book:   $  ";
	cin >> cost_book;

	// process phase
	total_order = number_books * cost_book;

	if (total_order > 50)
		total_shipping = 0;
	else
		total_shipping = 25.00f;

	total_order_shipping = total_shipping + total_order;

	// output phase
	cout << setprecision(2) << fixed;
	cout << "Book order total:      $" << setw(8) << total_order << endl;
	cout << "Shipping total:        $" << setw(8) << total_shipping << endl;
	cout << "Order & Shipping total:$" << setw(8) << total_order_shipping << endl;


	system("pause");

	return 0;
}