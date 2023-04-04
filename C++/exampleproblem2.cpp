#include <iostream>
#include <string>
using namespace std;

int main()
{
	// define varibles
	string lname;
	float credits;
	float total_tuition;

	//input phase
	cout << "Enter sstudent last name";
	cin >> lname;
	cout << "Please enter credits taken";
	cin >> credits;

	//process phase
	total_tuition = credits * 250.00f;

	//output phase
	cout << "Student:" << lname << endl;
	cout << "Tuition Owed $" << total_tuition << endl;

	return 0;

}