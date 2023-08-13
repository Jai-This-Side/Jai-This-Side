#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    cout << "enter the number to know if it's even or odd\n";
    cin >> num;

    if (num%2 == 0)
    {
        cout << "the number is even";
    }

    else {
        cout << "the number is odd";
    }
    
    return 0;
}
