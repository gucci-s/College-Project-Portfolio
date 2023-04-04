#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

float compute_batting_avg(float no_bats, float no_hits)
{
	float batting_avg;

	batting_avg = no_hits / no_bats;

	return batting_avg;
}
int main()
{
	string lname;
	float no_hits;
	float no_bats;
	float batting_avg;
	int c = 0;

	while (!cin.eof())
	{

		cout << "Press ctrl + z to stop";
		cout << endl;
		cout << "Enter last name:         ";
		cin >> lname;
		cout << "Enter number of at bats:  ";
		cin >> no_bats;
		cout << "Enter number of hits:     ";
		cin >> no_hits;
		cout << endl;

		c = c + 1;

		batting_avg = compute_batting_avg(no_bats, no_hits);

		cout << endl;
		cout << "Last name:       " << lname << endl;
		cout << "Batting average: " << batting_avg << endl;
		cout << endl;

	}

	cout << endl;
	cout << "Total number of player entries:  " << c << endl;

	system("pause");

	return 0;

}