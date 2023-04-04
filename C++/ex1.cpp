#include<iostream>
using namespace std;
int main()   //function header
// execution begins with main
{//begining of a block of code
	// does not care about column alignment
	// variables are defined before used
	// define variables
	// rules: letters, numbers and _ 
	// start with a letter, no spaces 
	// variables and statements are case sensitive
	// no reserved words 
	// length - 44 characters 
	// syntax for definition i: data type "varible name"
	float n1, n2;
	float s;
	float d;
	float p;
	float q;

	//input phase
	cout << "Enter the first number";
	cin >> n1;
	cout << "Enter the second number";
	cin >> n2;
	
	// process phase
	s = n1 + n2;
	d = n1 - n2;
	p = n1 * n2;
	q = n1 / n2;
 
	// output phase
	cout << "The sum is " << s << endl;
	cout << "The difference is " << d << endl;
	cout << "The product is " << p << endl;
	cout << "The quotient is " << q << endl;

	return 0;

}// end of block of code that goes with main