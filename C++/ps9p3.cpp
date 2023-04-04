#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void compute_totaltuition(float credit_hours, float finaid, float& tuition, float& totaltuition)
{
    tuition = credit_hours * 250.00f;

    totaltuition = tuition - finaid;
     
}
int main()
{
    float credit_hours;
    float finaid;
    float tuition;
    float totaltuition;
    string lname;
    float total_tuition_all = 0.0f;
    float no_students = 0;
    float avg_owed;
  

    while (!cin.eof())
    {
       
        cout << "Press ctrl + z when done";
        cout << endl;
        cout << endl;
        cout << "Enter Last Name:       ";
        cin >> lname;
        cout << "Enter Credit Hours:    ";
        cin >> credit_hours;
        cout << "Enter Finanical Aid:  $";
        cin >> finaid;
        cout << endl;

        compute_totaltuition(credit_hours, finaid, tuition, totaltuition);

        total_tuition_all = total_tuition_all + totaltuition;

        no_students = no_students + 1;

        cout << endl;
        cout << setprecision(2) << fixed;
        cout << "Last Name:       " << setw(10) << lname << endl;
        cout << "Tuition:        $" << setw(10) << tuition << endl;
        cout << "Tuition Owed:   $" << setw(10) << totaltuition << endl;
        cout << endl;

    }

    avg_owed = total_tuition_all / no_students;

    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Total Tuition Owed by all:     $" << setw(10) << total_tuition_all << endl;
    cout << "Average Tuition per student:   $" << setw(10) << avg_owed << endl;
    cout << "Number of student entries:      " << setw(10) << no_students << endl;
    cout << endl;

    return 0;

}