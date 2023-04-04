#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>  // contains the file object for txt file
using namespace std;
float comp_owed(float tution, float tuitionpaid)
{
	float tuitionowed;

	tuitionowed = tution - tuitionpaid;

	return tuitionowed;
}
int main()
{
	float tuition, tuitionowed, tuitionpaid, totalowed, avg_tuition;
	string lastname;
	int c;
	ifstream infile;

	// before loop
	c = 0;
	totalowed = 0.0f;

	// open the file
	infile.open("dfdata1.txt");

	while (!infile.eof())
	{
		infile >> lastname >> tuition >> tuitionpaid;

		tuitionowed = comp_owed(tuition, tuitionpaid);
		totalowed = totalowed + tuitionowed;
		c = c + 1;

		cout << setprecision(2) << fixed;
		cout << "Student:       " << lastname << endl;
		cout << "Tuition:      $" << setw(8) << tuition << endl;
		cout << "Tuition Paid: $" << setw(8) << tuitionpaid << endl;
		cout << "Tuition Owed: $" << setw(8) << tuitionowed << endl;
	} // end of loop

	infile.close();

	avg_tuition = totalowed / c;
	cout << endl;
	cout << "Total Tution Owed:   $" << setw(8) << totalowed << endl;
	cout << "Number of students:   " << setw(8) << c << endl;
	cout << "Average Tuition Owed:$" << setw(8) << avg_tuition << endl;

	return 0;
}