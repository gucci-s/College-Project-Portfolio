#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void comp_gas(float miles_trav, float gallons, float& mpg, float& cost_of_gas)
{
    mpg = miles_trav / gallons;

    cost_of_gas = gallons * 2.50f;
}
int main()
{
    float gallons, cost_of_gas, mpg, miles_trav;
    string city;

    cout << "Enter city of your trip";
    cin >> city;
    cout << "Enter miles travelled";
    cin >> miles_trav;
    cout << "Enter gallons used ";
    cin >> gallons;

    //calling statement
    comp_gas(miles_trav, gallons, mpg, cost_of_gas);

    cout << setprecision(2) << fixed;
    cout << city << endl;
    cout << "Miles per gallon " << mpg << endl;
    cout << "cost of gas for trip  " << cost_of_gas << endl;

    return 0;

}