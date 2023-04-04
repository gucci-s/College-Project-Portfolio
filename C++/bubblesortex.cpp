#include<iostream>
#include<fstream>
using namespace std;
void load_array(string city[])
{
	ifstream infile;
	int i;

	infile.open("text.txt");

	for (i = 0; i <= 5; i = i + 1)
	{
		infile >> city[i];
	}

	infile.close();
}
void bubble_sort(string city[])
{
	int i, j;
	string temp_city;

	for (j = 0; j < 4; j = j + 1)
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (city[i] > city[i + 1])
			{
				// swap
				temp_city = city[i];
				city[i] = city[i + 1];
				city[i + 1] = temp_city;
			}
		}
	}
}
void print_array(string city[])
{
	int i;
	for (i = 0; i < 5; i = i + 1)
		cout << city[i] << endl;
}
void search_city(string city[], string s_city)
{
	int i, x = -1;

	for (i = 0; i <= 4 && x == -1; i = i + 1)
	{
		if (s_city == city[i])
			x = i;
	}

	if (x == -1)
		cout << "City not found" << endl;
	else
		cout << city[x] << " Found in the list" << endl;

}
int main()
{
	string city[5];
	string s_city;

	load_array(city);
	print_array(city);
	bubble_sort(city);
	cout << "Sorted List" << endl;
	print_array(city);

	cout << "Enter a city to search for, ctl+z to stop";
	cin >> s_city;

	while (!cin.eof())
	{
		search_city(city, s_city);
		cout << "Enter a city to search for, ctl+z to stop";
		cin >> s_city;
	}

	return 0;


}