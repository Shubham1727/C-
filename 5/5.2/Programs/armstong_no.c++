#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,z, y = 0;
    cout << "Enter the value  no. ";
    cin >> n;
    z=n;

    while (n > 0)
    {
        int last_digit = n % 10;
        y = y + pow(last_digit, 3);
        n = n / 10;
    }
    if (y == z)
    {
        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not armstrong number" << endl;
    }

    return 0;
}