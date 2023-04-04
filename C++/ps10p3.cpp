#include<iostream>
#include<iomanip>
#include<fstream>  
using namespace std;


float comp_mpg(float gallons, float miles) 
{
	float mpg; 

	mpg = miles / gallons;

	return mpg; 
}
int main()
{
	
	float gallons;
	float miles;
	float mpg;
	float total_gallons = 0.0f;
	float total_miles = 0.0f;
	ifstream infile;

	
	infile.open("trips.txt"); 

	while (!infile.eof())  
	{
		infile >> gallons >> miles; 


		mpg = comp_mpg(gallons, miles);
		total_miles = total_miles + miles;
		total_gallons = total_gallons + gallons;

		
		cout << endl;
		cout << "Gallons of gas: " << setw(8) << gallons << endl;
		cout << "Miles of trip:  " << setw(8) << miles << endl;
		cout << "MPG:            " << setw(8) << mpg << endl;
		cout << endl;
	} 

	infile.close(); 

	
	cout << endl;
	cout << "Total Gallons used:  " << setw(8) << total_gallons << endl;
	cout << "Total Miles:         " << setw(8) << total_miles << endl;
	cout << endl;

	return 0;
}