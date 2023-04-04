#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()

{
	//variables

	string lname;
	float credit_hours;
	char district_code;
	float tuition_owed{};
	float total_tuition_all = 0.0f;
	float total_credit_hours = 0.0f;
	int number_students = 0;

	//input
	//before the loop

	cout << "Press ctrl + z when finished" << endl;
	cout << endl; 
	cout << "Enter Last Name:                ";
	cin >> lname;
	cout << "Enter Credit Hours:             ";
	cin >> credit_hours;
	cout << "Enter District Code ( I or O):  ";
	cin >> district_code;
	cout << endl;

	//process
	//in the loop
	while (!cin.eof())
	{
		if (district_code == 'I' || district_code == 'i')
			tuition_owed = credit_hours * 250;
		else
			if (district_code == 'O' || district_code == 'o')
				tuition_owed = credit_hours * 550;

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Student Last Name:   " << setw(8) << lname << endl;
		cout << "Total Tuition Owed: $" << setw(8) << tuition_owed << endl;
		cout << endl;

		cout << "Press ctrl + z when finished" << endl;
		cout << endl;
		cout << "Enter Last Name:                ";
		cin >> lname;
		cout << "Enter Credit Hours:             ";
		cin >> credit_hours;
		cout << "Enter District Code ( I or O):  ";
		cin >> district_code;
		cout << endl;

		total_tuition_all = total_tuition_all + tuition_owed;
		total_credit_hours = total_credit_hours + credit_hours;
		number_students = number_students + 1;

	}

	//output
	//after the loop

	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "Total Tuition Owed by All Students:     $" << setw(8) << total_tuition_all << endl;
	cout << "Total Credit Hours by All Students:      " << setw(8) << total_credit_hours << endl;
	cout << "Number of Students:                      " << setw(8) << number_students << endl;
	cout << endl;


	system("pause");

	return 0;

}