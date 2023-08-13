#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x_axis, y_axis;
    cout << "enter the value of x axis\n";
    cin >> x_axis;

    cout << "enter the value of y axis\n";
    cin >> y_axis;

    if (x_axis>0 && y_axis>0)
    {
        cout << "the coordinate belongs to I quadrant";
    }

    else if (x_axis<0 && y_axis>0)
    {
        cout << "the coordinate belongs to II quadrant";
    }

    else if (x_axis<0 && y_axis<0)
    {
        cout << "the coordinate belongs to III quadrant";
    }
    
    else {
        cout << "the coordinate belongs to IV quadrant";
    }
    
    return 0;
}
