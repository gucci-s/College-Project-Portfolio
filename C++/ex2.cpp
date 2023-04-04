#include<iostream>
using namespace std;
int main()
{
	//define varibles
	float assign1, assign2;
	float lab1, lab2;
	float s;

	//input phase
	cout << "Enter 2 assignment scores; " << endl;
	cin >> assign1 >> assign2;
	cout << "Enter 2 lab scores" << endl;
	cin >> lab1 >> lab2;

	//process phase
	s = assign1 + assign2 + lab1 + lab2;

	//output phase
	cout << "Total Points:" << s << endl;

	return 0;




}