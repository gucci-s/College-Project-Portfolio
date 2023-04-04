#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void loadArray(string fName[], string lName[], float gpa[])
{
	ifstream infile;
	int i;

	infile.open("studentGPA.txt");

	for (i=0; i<=9; i++) 
	{
		infile >> fName[i] >> lName[i] >> gpa[i];
	}
	infile.close();
}
void bubbleSort(string fName[], string lName[], float gpa[])
{
	int i, j;
	string templ, tempf;
	float l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{

			if (lName[j] > lName[j + 1])
			{
				templ = lName[j];
				lName[j] = lName[j + 1];
				lName[j + 1] = templ;

				tempf = fName[j];
				fName[j] = fName[j + 1];
				fName[j + 1] = tempf;

				l = gpa[j];
				gpa[j] = gpa[j + 1];
				gpa[j + 1] = l;
			}
		}
	}
}

void print_Array(string fName[], string lName[], float gpa[])
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		cout << setprecision(2) << fixed;
		cout << fName[i] << "  " << lName[i] << "  " << gpa[i] << endl;
	}
}

void displayReverse(string fName[], string lName[], float gpa[])
{
	int i;

	for (i = 9; i >= 0; i = i - 1)
	{
		cout << fName[i] << "  " << lName[i] << "  " << gpa[i] << endl;
	}
}

void Search(string fName[], string lName[], float gpa[])
{
	int i;
	int j = -1;
	string searchName;


	cout << "Enter last name.  Press ctl+z to exit.";
	cin >> searchName;
	while (!cin.eof())
	{
		for (i = 1; i <= 9; i++)
		{
			if (searchName == lName[i])
				j = i;
		}
		if (j > 0)
			cout << fName[j] << "    " << lName[j] << "   " << gpa[j] << endl;
		else cout << "Name not found";
		cout << endl;

		cout << "Enter last name.  Press ctl+z to exit.";
		cin >> searchName;
	}
}

int main()
{
	string fName[10], lName[10];
	float gpa[10];

	loadArray(fName, lName, gpa);
	print_Array(fName, lName, gpa);
	cout << endl;

	displayReverse(fName, lName, gpa);
	cout << endl;
	bubbleSort(fName, lName, gpa);
	print_Array(fName, lName, gpa);
	cout << endl;
	Search(fName, lName, gpa);

	return 0;
}