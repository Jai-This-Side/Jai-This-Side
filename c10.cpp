#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int height;
    cout << "enter your height\n";
    cin >> height;

    if (height < 147)
    {
        cout << "the person is dwarf";
    }

    else if (height > 152)
    {
        cout << "the person is tall";
    }
    else {
        cout << "the person has an average height";
    }
    
    return 0;
}
