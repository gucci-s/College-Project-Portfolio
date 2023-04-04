#include<iostream>
#include<iomanip>

using namespace std;

//loop control variable is "i" means that every new loop it increments it for each line 1...2...3..4.. (ends at 11) 

int main()
{
	int y; //represents year
	double penny = 1;
	double no_pennies;
	double no_dollars;

	for (y = 1; y <= 365; y = y + 1)
	{
		cout << y << "     " << penny << endl;
		penny = penny * 2;

		no_pennies = penny;

		no_dollars = no_pennies / 100;

	}

	cout << "Number of pennies after 1 year:   " << no_pennies << endl;
	cout << "Number of dollars after 1 year:   " << no_dollars << endl;

	return 0;
}