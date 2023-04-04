#include<iostream>
#include<iomanip>
using namespace std;

void compute_postage(float area_code, float weight_peroz, float& area_charge,float weight, float& weight_charge, float& postage)
{
    if (area_code == 60171)
        area_charge = 2.00f;
    else
        if (area_code == 60172)
            area_charge = 2.5f;
        else
            if (area_code == 60635)
                area_charge = 3.00f;
            else 
                area_charge = 5.00f;
    if (weight > 100)
        weight_charge = 0.02f;
    else
        if (weight > 50)
            weight_peroz = 0.03f;
        else 
            weight_peroz = 0.05f;

    weight_charge = weight * weight_peroz;

    postage = weight_charge + area_charge;

    
}
int main()
{
    float weight;
    float weight_peroz{};
    float area_code;
    float area_charge{};
    float weight_charge;
    float postage;
    int c = 0;


    while (!cin.eof())
    {
        cout << "Press ctrl + z to stop" << endl;
        cout << endl;
        cout << "Enter weight of package (in lbs):   ";
        cin >> weight;
        cout << "Enter Zip Code:                     ";
        cin >> area_code;

        compute_postage(area_code, weight_peroz, area_charge, weight, weight_charge, postage);

        c = c + 1;

        cout << endl;
        cout << setprecision(2) << fixed;
        cout << "Area Charge:   " << "$" << setw(10) << area_charge << endl;
        cout << "Weight Charge: " << "$" << setw(10) << weight_charge << endl;
        cout << "Postage:       " << "$" << setw(10) << postage << endl;
        cout << endl;

    }

    cout << endl;
    cout << "Total Number of Entires:  " << c << endl;

    return 0;

}