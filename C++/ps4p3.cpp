#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables

	string name_last;
	float hours_worked;
	float pay_rate;
	float pay_total;
	char code_job;
	char E;
	char J;
	char A;

	//Input

	cout << "Enter employee last name:  ";
	cin >> name_last;
	cout << "Enter total hours worked:  ";
	cin >> hours_worked;
	cout << "Enter job code:            ";
	cin >> code_job;

	//Process

	if (code_job == 'E')
		pay_rate = 25;
	else
		if (code_job == 'J')
			pay_rate = 20;
		else
			if (code_job == 'A')
				pay_rate = 15;

	pay_total = hours_worked * pay_rate;

	//Output

	cout << setprecision(2) << fixed;
	cout << "Employee Last Name:  " << name_last << endl;
	cout << "Total hourse worked: " << hours_worked << endl;
	cout << "Pay rate:            " << setw(8) << pay_rate << endl;
	cout << "Total pay:           " << setw(8) << pay_total << endl;

	system("pause");

	return 0;











}