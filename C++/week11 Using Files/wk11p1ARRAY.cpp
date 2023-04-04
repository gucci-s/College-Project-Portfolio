#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

void load_array(string fname[], string lname[], float gpa[]) 
{
	
	int i;
	ifstream infile;

	infile.open("arrayp1DF.txt"); 

	for (i = 0; i <= 9; i = i + 1)

	{	
		infile >> fname[i] >> lname[i] >> gpa[i];

	}

	infile.close(); //closing file

}

void printarray(string fname[], string lname [], float gpa[])
{
	
	int i;

	for (i = 0; i <= 9; i = i + 1)
	{
		cout << endl;
		cout << "Name:  " << fname[i] << " " << lname[i] << setw(20) << endl;
		cout << setprecision(2) << fixed;
		cout << "GPA:   " << gpa[i] << setw(20) << endl;
		cout << endl;

	}

}

int main()
{
	string lname[10]; 
	string fname[10];
	float gpa[10];

	load_array(fname, lname, gpa);
	printarray(fname, lname, gpa);

	return 0;
}