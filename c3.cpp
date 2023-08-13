#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2;

    cout << "enter the number 1\n";
    cin >> num1;

    cout << "enter the number 2\n";
    cin >> num2;

    if (num1 == num2)
    {
        cout << "both the numbers are equal";
    }

    else {
        cout << "the numbers are not equal";
    }
    
    return 0;
}
