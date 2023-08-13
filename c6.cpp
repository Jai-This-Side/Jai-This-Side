#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    cout << "enter the year to know wheter it's leap year or not";
    cin >> year;

    if (year%4 ==0)
    {
        if (year%100 == 0)
        {
            if (year%400 == 0)
            {
                cout << "the year is a leap year";
            }

            else {
                cout << "the year is not a leap year";
            } 
        }
        else {
            cout << "the year is a leap year";
        }
    }
    else {
        cout << "the year is not a leap year";
    }
    
return 0;
}
