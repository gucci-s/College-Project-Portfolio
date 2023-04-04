#include <iostream>
#include<iomanip>

using namespace std;

int main()

{

	//variables

	float hours;
	float pay_gross;
	float pay_rate{};
	char code_job;

	//input

	cout << "Enter Job Code (A, J or L):   ";
	cin >> code_job;
	cout << "Enter Hours:           ";
	cin >> hours;

	//process //added code to allow for lowercase or uppercase input from user

	if (code_job == 'L' || code_job == 'l' && hours > 40)
		pay_rate = 50;
	else
		if (code_job == 'L' || code_job == 'l' && hours <= 40)
			pay_rate = 40;
		else
			if (code_job == 'J' || code_job == 'j' && hours > 60)
				pay_rate = 100;
			else
				if (code_job == 'J' || code_job == 'j' && hours <= 60)
					pay_rate = 75;
				else
					if (code_job == 'A' || code_job == 'a'  && hours > 40)
						pay_rate = 25;
					else
						if (code_job == 'A' || code_job == 'a' && hours <= 40)
							pay_rate = 20;

	pay_gross = hours * pay_rate;

	//output

	cout << setprecision(2) << fixed;
	cout << "Gross Salary:   $" << setw(8) << pay_gross << endl;

	system("pause");

	return 0;

}