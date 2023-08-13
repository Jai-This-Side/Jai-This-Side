#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout << "enter your age to know if you are eligible to vote or not";
    cin >> age;

    if (age < 18)
    {
        cout << "you are not eligible to vote";
    }

    else if (age > 18)
    {
        cout << "you are eligible to vote";
    }
    
    
    return 0;
}
