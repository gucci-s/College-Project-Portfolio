#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>  
using namespace std;


float comp_sav(float msrp, float sales_price) 
{
	float total_savings; 

	total_savings = msrp - sales_price;

	return total_savings; 
}
int main()
{
	
	string make;
	string model;
	float msrp;
	float sales_price;
	float total_savings;
	float sum_sav_all = 0.0f;
	ifstream infile;

	
	infile.open("auto.txt"); 

	while (!infile.eof()) 
	{
		infile >> make >> model >> msrp >> sales_price; 
		

		total_savings = comp_sav(msrp, sales_price);
		sum_sav_all = sum_sav_all + total_savings;

		
		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Make and Model:  " << make << " " << model << endl;
		cout << "MSRP:            $" << setw(8) << msrp << endl;
		cout << "Sales Price:     $" << setw(8) << sales_price << endl;
		cout << endl;
	} 

	infile.close(); 


	cout << endl;
	cout << "Total of all savings:    $" << setw(8) << sum_sav_all << endl;
	cout << endl;

	return 0;

}