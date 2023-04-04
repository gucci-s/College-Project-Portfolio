#include <iostream>
#include <string>


using namespace std;
int main()
{
	//define variables

	char A;
	char B;
	char C;
	char D;
	char F;
	float number_score;
	string end_message;
	char letter_grade;
	string name_last;

		// input phase

	cout << "Enter Last Name: ";
	cin >> name_last;
	cout << "Enter Score: ";
	cin >> number_score;

	// process phase

	if (number_score >= 90)
		letter_grade = 'A';
	else
		if (number_score >= 80)
			letter_grade = 'B';
		else
			if (number_score >= 70)
				letter_grade = 'C';

	
	
	
	
	letter_grade = 'D';
				else
					if (number_score < 60)
						letter_grade = 'F';
	
	// output phase


	cout << "Last Name:     " << name_last << endl;
	cout << "Letter Grade:  " << letter_grade << endl;

	system("pause");

	return 0;
}