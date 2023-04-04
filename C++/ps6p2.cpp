#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()

{
	//variables

	string lname;
	float num_hits;
	float num_atbats;
	float avg_batting;
	int C = 0.0f;


	//input
	//before the loop

	cout << "Enter last name:  ";
	cin >> lname;
	cout << "Enter number of hits and number of at bats:   ";
	cin >> num_hits >> num_atbats;
	cout << "use ctrl + z to stop";
	cout << endl;


	//process
	//in the loop
	while (!cin.eof())
	{
		avg_batting = num_hits / num_atbats;
		C = C + 1;

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Last Name:        " << setw(8) << lname << endl;
		cout << "Batting Average:  " << setw(8) << avg_batting << endl;
		cout << endl;

		cout << "Enter last name:  ";
		cin >> lname;
		cout << "Enter number of hits and number of at bats:   ";
		cin >> num_hits >> num_atbats;
		cout << "use ctrl + z to stop";
		cout << endl;

	}

	//output
	//after the loop

	cout << "Total Entries/Number of players:   " << C << endl;
	cout << endl;


	system("pause");

	return 0;

}