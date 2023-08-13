#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    cout << "enter the first number\n";
    cin >> num1;

    cout << "enter the second number\n";
    cin >> num2;

    cout << "enter the third number\n";
    cin >> num3;

    if (num1>num2 && num1>num3)
    {
        cout << "first number is the biggest number";
    }

    else if (num2>num1 && num2>num3)
    {
        cout << "second number is the biggest";
    }

    else {
        cout << "third number is biggest";
    }
    
    
    return 0;
}
