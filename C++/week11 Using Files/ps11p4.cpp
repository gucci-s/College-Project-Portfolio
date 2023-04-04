#include <iostream>
using namespace std;

int main() 
{
    int range;
    int first = 0;
    int second = 1;
    int fibonicci = 0;

    cout << "Enter Range for Terms of Fibonacci Sequence: ";

    cin >> range;

    cout << "Fibonicci Series upto " << range << " Terms " << endl;

    for (int c = 0; c <50; c++)
    {
        if (c <= 1)
            fibonicci = c;
        else
        {
            fibonicci = first + second;
            first = second;
            second = fibonicci;
        }
        cout << fibonicci << " ";
    }
    return 0;
    
} //had to search online to find help in writing this, could not figure out how to automatically stop at 50 without user input?