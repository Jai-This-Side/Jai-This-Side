#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int amount1, amount2;

    cout << "enter amount 1\n";
    cin >> amount1;

    cout << "enter amount 2\n";
    cin >> amount2;

    int sum = amount1 + amount2;
    cout << "total amount is "<< sum << endl;
    return 0;
}
