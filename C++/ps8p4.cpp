#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

float compute_pay_rate(char job_code)
{
	float pay_rate{};

	if (job_code == 'L' || job_code == 'l')
		pay_rate = 25.00f;
	else
		if (job_code == 'A' || job_code == 'a')
			pay_rate = 30.00f;
		else
			if (job_code == 'J' || job_code == 'j')
				pay_rate = 50.00f;

	return pay_rate;
	
}
float compute_gross_pay(float pay_rate, float hours_worked, float OT_pay)
{
	float gross_pay{};

	gross_pay = pay_rate * hours_worked + OT_pay;

		if (hours_worked > 40)
			OT_pay = hours_worked - 40 * (pay_rate * 1.5f);

	return gross_pay;

}

int main()
{
	string lname;
	char job_code;
	float hours_worked;
	float pay_rate{};
	float gross_pay;
	float OT_pay{};
	float total_all_pay = 0.0f;



	while (!cin.eof())
	{

		cout << "Enter ctrl + z to stop";
		cout << endl;
		cout << "Enter last name:    ";
		cin >> lname;
		cout << "Enter job code:     ";
		cin >> job_code;
		cout << "Enter hours worked: ";
		cin >> hours_worked;
		cout << endl;
		
		pay_rate = compute_pay_rate(job_code);

		gross_pay = compute_gross_pay(pay_rate, hours_worked, OT_pay);

		total_all_pay = total_all_pay + gross_pay;

		cout << setprecision(2) << fixed;
		cout << "Last name:   " << setw(8) << lname << endl;
		cout << "Gross Pay (with over time):   $" << setw(8) << gross_pay << endl;
		cout << endl;


	}

	cout << endl;
	cout << "Total gross pay for all:    $" << setw(8) << total_all_pay << endl;

	system("pause");

	return 0;
}