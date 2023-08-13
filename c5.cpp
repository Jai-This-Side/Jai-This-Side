#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number to know it's nature\n";
    cin >> num;

    if (num==0)
    {
        cout << "the number is zero";
    }

    else if (num > 0)
    {
        cout << "the number is positive";
    }

    else {
        cout << "the number is negative";
    }
    
    return 0;
}

