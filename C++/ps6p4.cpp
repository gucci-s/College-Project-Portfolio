#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()

{
	//variables

	string lname;
	char job_code;
	float total_hours;
	float total_pay;
	float hourly_pay{};
	float overtime_pay;
	int total_entires = 0.0f;
	float all_pay = 0.0f;
	float average_pay{};


	//input
	//before the loop

	cout << "Press ctrl + Z to stop" << endl;
	cout << endl;
	cout << "Enter Last Name:             ";
	cin >> lname;
	cout << "Enter Job Code (A, J, L):    ";
	cin >> job_code;
	cout << "Enter Hours Worked:          ";
	cin >> total_hours;
	cout << endl;

	//process
	//in the loop
	while (!cin.eof())
	{
		//determine hourly rate nested if statment

		if (job_code == 'L' || job_code == 'l')
			hourly_pay = 25;
		else
			if (job_code == 'A' || job_code == 'a')
				hourly_pay = 30;
			else
				if (job_code == 'J' || job_code == 'j')
					hourly_pay = 50;

		// determine overtime if any 

		if (total_hours > 40)
			overtime_pay = (total_hours - 40) * (hourly_pay * 1.5f);
		else
			overtime_pay = 0;

		// determine total pay with any overtime

		if (total_hours <= 40)
			total_pay = total_hours * hourly_pay;
		else
			if (total_hours > 40)
				total_pay = 40 * hourly_pay + overtime_pay;

		total_entires = total_entires + 1;
		all_pay = all_pay + total_pay;
		average_pay = all_pay / total_entires;

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Last Name:   " << setw(8) << lname << endl;
		cout << "Job Code:    " << setw(8) << job_code << endl;
		cout << "Total Hours: " << setw(8) << total_hours << endl;
		cout << "Total Pay:  $" << setw(8) << total_pay << endl;
		cout << endl;

		cout << "Press ctrl + Z to stop" << endl;
		cout << endl;
		cout << "Enter Last Name:             ";
		cin >> lname;
		cout << "Enter Job Code (A, J, L):    ";
		cin >> job_code;
		cout << "Enter Hours Worked:          ";
		cin >> total_hours;
		cout << endl;

	}

	//output
	//after the loop

	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "Average Pay:   $" << setw(8) << average_pay << endl;
	cout << "Total Entries:  " << setw(8) << total_entires << endl;
	cout << endl;


	system("pause");

	return 0;

}