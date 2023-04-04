#include <iostream>
using namespace std;

int main()
{
	//define variables
	float stock_price;
	float stock_quantity;
	float value_portfolio;

	// input phase
	cout << "Enter quantity of stock  ";
	cin >> stock_quantity;
	cout << "Enter current value of stock  $";
	cin >> stock_price;

	// process phase
	value_portfolio = stock_quantity * stock_price;

	// output phase
	cout << "Current Value of Portfolio is  $" << value_portfolio;

	return 0;
}
