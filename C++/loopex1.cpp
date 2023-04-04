#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{

	//Varibles

	string name_last;
	float score, avg_score, total_scores=0.0f;
	int no_of_students=0; //this allows no_of_students to start at 0 to ensure equation calculation can be processed
	char letter_grade;

	//Before the loop

	cout << "Enter student last name and score:, ctl + Z to stop  ";
	cin >> name_last >> score;

	while (!cin.eof()) //beginning of loop
	{
		// a line of date to process

		if (score >= 90)
			letter_grade = 'A';

		else if (score >= 80)
			letter_grade = 'B';

		else if (score >= 70)
			letter_grade = 'C';

		else if (score >= 60)
			letter_grade = 'D';

		else
			letter_grade = 'F';

		no_of_students = no_of_students + 1; //assignment statement, it is executed by processing on the right and putting that as the varible value on the left; so 1=0+1, then next loop is 2=1+1, next loop is 3=2+1, and so on
		total_scores = total_scores + score;

		cout << "Student:   " << name_last << endl;
		cout << "Grade:   " << letter_grade << endl;

		cout << "Enter student last name and score:, ctl + Z to stop  ";
		cin >> name_last >> score;
		

	}	// end of loop

	// after the loop
	avg_score = total_scores / no_of_students;

	cout << setprecision(2) << fixed;
 	cout << "The average student score is:  " << setw(8) << avg_score << endl;

	system("pause");

	return 0;


}