#include<iostream>
#include<string>
using namespace std;
int main()
{
	//define variables
	float gpa;
	string last_name, msg;

	// input phase
	cout << "Enter GPA";
	cin >> gpa;
	cout << "Enter student last name";
	cin >> last_name;

	// process phase
	if (gpa > 4.0f)
		msg = "Well Done";
	else
		msg = "Good Effort";

	// output phase
	cout << last_name << endl;
	cout << msg << endl;

	system("pause");

	return 0;
}