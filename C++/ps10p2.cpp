#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>  
using namespace std;


float comp_subtotal(float qty, float price) 
{
	float subtotal; 

	subtotal = qty * price;

	return subtotal; 
}
int main()
{
	
	float qty;
	float price;
	float subtotal;
	float total;
	float tax;
	float subtotal_all = 0.0f;
	string item;
	ifstream infile;

	
	infile.open("grocery.txt"); 

	while (!infile.eof()) 
	{
		infile >> item >> qty >> price; 

		

		subtotal = comp_subtotal(qty, price);
		subtotal_all = subtotal_all + subtotal;

		
		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "Item:      " << item << endl;
		cout << "Quantity:   " << setw(8) << qty << endl;
		cout << "Price:     $" << setw(8) << price << endl;
		cout << "Subtotal:  $" << setw(8) << subtotal << endl;
		cout << endl;
	} 

	infile.close(); 

	
	tax = subtotal_all * 0.07f;
	total = tax + subtotal_all;

	
	cout << endl;
	cout << "Subtotal of all items:  $" << setw(8) << subtotal_all << endl;
	cout << "Total Tax:              $" << setw(8) << tax << endl;
	cout << "Total:                  $" << setw(8) << total << endl;
	cout << endl;

	return 0;
}