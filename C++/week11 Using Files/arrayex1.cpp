#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void load_array(string lname[]) //[] means passing it to the function
{
	//variables
	int i;
	ifstream infile;

	infile.open("arrayd1.txt"); //opening file

	for (i = 0; i <= 9; i = i + 1)
	{
		infile >> lname[i]; //[i] is the passing variable [] means subzero

	}

	infile.close(); //closing file

}

void printarray(string lname[])
{
	//traverse the array start at 0 and go to the end of the array
	int i;

	for (i = 0; i <= 9; i = i + 1)
	{
		cout << lname[i] << endl;

	}

}

int main()
{
	string lname[10]; //fixed length

	load_array(lname);
	printarray(lname);

	return 0;
}
