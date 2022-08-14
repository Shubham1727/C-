#include <iostream>

using namespace std;
int main()
{
    int sidea, sideb, sidec;
    cout << "Input three sides of a triangle\n";
    cin >> sidea >> sideb >> sidec;

    if (sidea + sideb <= sidec || sideb + sidec <= sidea || sidea + sidec <= sideb)
    {
        cout << "The triangle with the given values cannot be formed";
    }

    else
    {
        if (sidea == sideb && sideb == sidec)
        {
            cout << "The triangle is equilateral\n";
        }

        else if (sidea == sideb || sideb == sidec || sidec == sidea)
        {
            cout << "The triangle is isosceles\n";
        }

        else
        {
            cout << "The triangle is scalene\n";
        }
    }

    return 0;
}