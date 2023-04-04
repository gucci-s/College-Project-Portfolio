#include<iostream>
#include<iomanip>
using namespace std;
void comp_gp(float hours, char jc, float& gp, float& rate)
{
	float ot_hours, ot_pay, reg_hours, reg_pay;

	if (jc == 'L')
		rate = 25.0f;
	else if (jc == 'J')
		rate = 30.0f;
	else
		rate = 50.0f;

	if (hours > 40)
	{
		ot_hours = hours - 40.00f;
		ot_pay = ot_hours * rate * 1.5f;
		reg_hours = 40.00f;
		reg_pay = reg_hours * rate;
	}
	else
	{
		ot_hours = 0.0f;
		ot_pay = 0.0f;
		reg_pay = hours * rate;
	}

	gp = reg_pay + ot_pay;

}
int main()
{
	float gp, hours;
	float rate;
	char jc;
	string lastname;

	cout << "Enter employee last name";
	cin >> lastname;
	cout << "Enter hours worked";
	cin >> hours;
	cout << "Enter Job Code";
	cin >> jc;

	comp_gp(hours, jc, gp, rate);


	cout << setprecision(2) << fixed;
	cout << lastname << endl;
	cout << "Pay Rate is  $" << setw(8) << rate << endl;
	cout << "Gross Pay is $" << setw(8) << gp << endl;

	system("pause");

	return 0;
}