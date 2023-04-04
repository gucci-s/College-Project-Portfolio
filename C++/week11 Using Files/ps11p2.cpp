#include<iostream>
#include<iomanip>

using namespace std;

//loop control variable is "i" means that every new loop it increments it for each line 1...2...3..4.. (ends at 11) 

int main()
{
	int y; //represents year
	double pop = 60000000.00;

	cout << setprecision(0) << fixed;
	cout << "Year      Population" << endl;
	
	for (y = 1; y <= 10; y = y + 1)
	{
		cout << y << "     " << pop << endl;
		pop = pop * 1.04;
	}

	return 0;
}