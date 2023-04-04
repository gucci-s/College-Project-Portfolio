#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

	//variables

	char code_eq;
	char time_day;
	float cost_rental;


	//Input

	cout << "Enter equipment code (A, B, C, etc...):   ";
	cin >> code_eq;
	cout << "Enter time needed for rental F for full day or H for half day:   ";
	cin >> time_day;

	//Process //added code to allow for lowercase or uppercase input from user

	if (code_eq == 'a' || code_eq == 'A' && time_day == 'h' || time_day == 'H')
		cost_rental = 10;
	else
		if (code_eq == 'a' || code_eq == 'A' && time_day == 'f' || time_day == 'F')
			cost_rental = 15;
		else
			if (code_eq == 'b' || code_eq == 'B' && time_day == 'h'|| time_day == 'H')
				cost_rental = 20;
			else
				if (code_eq == 'b' || code_eq == 'B' && time_day == 'f' || time_day == 'F')
					cost_rental = 35;
				else
					if (code_eq == 'c' || code_eq == 'C' && time_day == 'h' || time_day == 'H')
						cost_rental = 40;
					else
						if (code_eq == 'c' || code_eq == 'C' && time_day == 'f' || time_day == 'F')
							cost_rental = 45;
						else
							cost_rental = 50;

	//Output

	cout << setprecision(2) << fixed;
	cout << "Rental Cost:  $" << setw(8) << cost_rental << endl;

	system("pause");

	return 0;


}