#include <iostream>
using namespace std;

int main()
{
	//define variables
	float exam1;
	float exam2;
	double total;
	
	// input phase
	cout << "Enter Exam 1 Score  ";
	cin >> exam1;
	cout << "Enter Exam 2 Score  ";
	cin >> exam2;

	// process phase
	total = (exam1 * 0.60) + (exam2 * 0.40);

	// output phase
	cout << "Total Score is  " << total;

	return 0;
}
