#include <iostream>
using namespace std;

int main()
{
	//define variables
	float purchase_price;
	float current_price;
	float incr_decr;

	// input phase
	cout << "Enter original purchase price of stock  ";
	cin >> purchase_price;
	cout << "Enter current price of stock  ";
	cin >> current_price;

	// process phase
	incr_decr = (current_price - purchase_price) / purchase_price * 100;
	

	// output phase
	cout << "Total profit or loss percentage is  " << incr_decr << "%";


	return 0;
}
