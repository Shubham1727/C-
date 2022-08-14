#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the three numbers\n";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the greatest number\n";
        }
        else
        {
            cout << c << " is the greatest number\n";
        }
    }
    else if (b > c)
    {
        cout << b << " is the greatest number\n";
    }

    else
    {
        cout << c << " is the greatest number\n";
    }

    return 0;
}