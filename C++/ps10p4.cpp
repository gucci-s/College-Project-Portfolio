#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>  
using namespace std;


float comp_bi_salary(float salary) 
{
	float bi_salary; 

	bi_salary = salary / 26;

	return bi_salary; 
}
int main()
{
	
	string lname;
	float salary;
	float bi_salary;
	float avg_salary;
	float total_salary = 0.0f;
	int c = 0;
	ifstream infile;
	
	infile.open("empl.txt"); 

	while (!infile.eof()) 
	{
		infile >> lname >> salary; 

		
		bi_salary = comp_bi_salary(salary);
		total_salary = total_salary + salary;
		c = c + 1;

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Last Name:         " << lname << endl;
		cout << "Annual Salary: $" << setw(8) << salary << endl;
		cout << "Bi-Weekly Pay: $" << setw(8) << bi_salary << endl;
		cout << endl;
	} 

	infile.close(); 

	
	avg_salary = total_salary / c;

	
	cout << endl;
	cout << "Total Employees:          " << setw(8) << c << endl;
	cout << "Total of all Salaries:  $" << setw(8) << total_salary << endl;
	
	cout << "Average Salary:         $" << setw(8) << avg_salary << endl;
	cout << endl;

	return 0;
}