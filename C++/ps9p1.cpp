#include<iostream>
#include<iomanip>
using namespace std;
void compute_total(float qty, float price, float& subtotal, float& tax, float& total)
{
    subtotal = qty * price;

    tax = subtotal * 0.07;

    total = subtotal + tax;
}
int main()
{
    float qty;
    float price;
    float subtotal{};
    float tax;
    float total;
    float tax_for_all_orders = 0.0f;
    float total_all_orders = 0.0f;

    while (!cin.eof())
    {

        cout << "Press ctrl + z when done";
        cout << endl;
        cout << endl;
        cout << "Enter quantity:   ";
        cin >> qty;
        cout << "Enter price:     $";
        cin >> price;
        cout << endl;

        compute_total(qty, price, subtotal, tax, total);

        tax_for_all_orders = tax_for_all_orders + tax;
        total_all_orders = total_all_orders + total;

        cout << endl;
        cout << setprecision(2) << fixed;
        cout << "Subtotal:   " << "$" << setw(10) << subtotal << endl;
        cout << "Total Tax:  " << "$" << setw(10) << tax << endl;
        cout << "Total:      " << "$" << setw(10) << total << endl;
        cout << endl;

    }

    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Total of all orders:       " << "$" << setw(10) << total_all_orders << endl;
    cout << "Total Tax for all orders:  " << "$" << setw(10) << tax_for_all_orders << endl;
    cout <<  endl;

    return 0;

}