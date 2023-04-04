#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int i;
	float p, r, eb; //principle, rate, ending balance
	float earnedint, totint = 0.0f;

	cout << "Enter principle to invest";
	cin >> p;
	cout << "Enter interest rate";
	cin >> r;

	cout << endl << "Interest Calculation Problem" << endl;
	cout << "Year    Beg Bal   Interest    End Bal" << endl;
	for (i = 1; i <= 5; i = i + 1)
	{
		earnedint = p * r;
		totint = totint + earnedint;
		eb = p + earnedint;
		cout << i << "     " << p << "    " << earnedint << "     " << eb << endl;

		p = eb;

	}

	cout << "Total interest earned " << setw(10) << totint << endl;

	return 0;
}