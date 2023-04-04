#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

// user created function

float compute_tution(float credit_hours, float cost_credit, char district_code)
{
	float tuition;

	if (district_code == 'o' || district_code == 'O')
		cost_credit = 550.00f;
	else
		if (district_code == 'i' || district_code == 'I')
			cost_credit = 250.00f;

	tuition = credit_hours * cost_credit;

	return tuition;
}

// start main
int main()
{
	string lname;
	float credit_hours;
	char district_code;
	float tuition{};
	float cost_credit{};
	float tuition_for_all = 0.0f;
	int c = 0;

	//start loop

	while (!cin.eof())
	{
		//input phase

		cout << "Press ctrl + z to stop";
		cout << endl;
		cout << "Enter last name:  ";
		cin >> lname;
		cout << "Enter district code (O or I):  ";
		cin >> district_code;
		cout << "Enter credit hours:            ";
		cin >> credit_hours;
		cout << endl;

		//loop process phase

		tuition = compute_tution(credit_hours, cost_credit, district_code);

		tuition_for_all = tuition_for_all + tuition;

		c = c + 1; //student count


		// loop output phase

		cout << setprecision(2) << fixed;
		cout << endl;
		cout << "Student name:  " << setw(10) << lname << endl;
		cout << "Tuition owed:  " << setw(10) << tuition << endl;
		cout << endl;

	} //end of loop

	//out of loop

	cout << setprecision(2) << fixed;
	cout << endl;
	cout << "Number of students:  " << setw(10) << c << endl;
	cout << "Tuition owed by all: " << setw(10) << tuition << endl;


	system("pause");

	return 0;
}