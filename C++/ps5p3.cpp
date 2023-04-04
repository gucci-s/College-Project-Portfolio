#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
	//Varibles

	float number_tickets;
	float cost_perticket;
	float cost_total;
	char code_location;


	//Input 

	cout << "Enter number of tickets:   ";
	cin >> number_tickets;
	cout << "Enter location code (H, L, etc...:   ";
	cin >> code_location;

	//Process //added code to allow for lowercase or uppercase input from user

	if (number_tickets > 25 || code_location == 'H' || code_location == 'h')
		cost_perticket = 30;
	else
		if (number_tickets >= 10 || code_location == 'L' || code_location == 'l')
			cost_perticket = 40;
	else
		if (number_tickets < 10)
				cost_perticket = 50;

	cost_total = number_tickets * cost_perticket;


	//Output

	cout << "Number of tickets:   " << setw(8) << number_tickets << endl;
	cout << setprecision(2) << fixed;
	cout << "Price per ticket:   $" << setw(8) << cost_perticket << endl;
	cout << "Total cost:         $" << setw(8) << cost_perticket << endl;


	system("pause");

	return 0;



}