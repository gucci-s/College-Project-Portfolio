#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float amt_borrow;
	float amt_paid;
	float annual_balance;
	int i;
	int n;

	cout << "Enter amount borrowed:   $";
	cin >> amt_borrow;
	cout << "Enter amount paid annually:  $";
	cin >> amt_paid;
	cout << "Enter how many years to display:  ";
	cin >> n;

	cout << endl << "New balance for each year" << endl;
	cout << "Year   End Balance" << endl;

	for (i = 1; i <= n; i = i + 1)
	{
		annual_balance = amt_borrow - amt_paid;
		 
		cout << n << "      " << annual_balance << endl;

	}

	return 0;
}
