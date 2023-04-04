#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>  
using namespace std;


float comp_tuition_owed(char student_code, float credits, float cost_credit) 
{
	float tuition_owed; 

	if (student_code == 'i' || student_code == 'I')
		cost_credit = 250.00f;
	else cost_credit = 500.00f;

	tuition_owed = cost_credit * credits;

	return tuition_owed; 
}
int main()
{
	
	string lname;
	char student_code;
	float credits;
	float cost_credit;
	float tuition_owed;
	float tuition_owed_all = 0.0f;
	int c = 0;
	float avg_tuition;
	ifstream infile;

	
	infile.open("student.txt"); 

	while (!infile.eof())
	{
		infile >> lname >> student_code >> credits; 

		if (student_code == 'i' || student_code == 'I') //I am not sure how else to display the value of cost_credit, it will not pull value from function when I run the debugger
			cost_credit = 250.00f;
		else cost_credit = 500.00f;

		
		tuition_owed = comp_tuition_owed(student_code, credits, cost_credit);
		tuition_owed_all = tuition_owed_all + tuition_owed;
		c = c + 1;

		
		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Last Name:        " << lname << endl;
		cout << "Student Code:     " << setw(8) << student_code << endl;
		cout << "Cost per credit: $" << setw(8) << cost_credit << endl;
		cout << "Total credits:    " << setw(8) << credits << endl;
		cout << "Tuition owed:    $" << setw(8) << tuition_owed << endl;
		cout << endl;
	} 

	infile.close(); 


	avg_tuition = tuition_owed_all / c;

	
	cout << endl;
	cout << "Total students:                " << setw(8) << c << endl;
	cout << "Total all tuition owed:       $" << setw(8) << tuition_owed_all << endl;
	cout << "Average tuition per student:  $" << setw(8) << avg_tuition << endl;
	cout << endl;

	return 0;
}