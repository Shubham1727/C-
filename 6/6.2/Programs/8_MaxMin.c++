#include <iostream>
using namespace std;

void Maximum(int a, int b, int c)
{
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
    else
    {
        if (b > c)
        {
            cout << b << " is the greatest number\n";
        }
        else
        {
            cout << c << " is the greatest number\n";
        }
    }
}

void Minimum(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is the smallest number\n";
        }
        else
        {
            cout << c << " is the smallest number\n";
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " is the smallest number\n";
        }
        else
        {
            cout << c << " is the smallest number\n";
        }
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers\n";
    cin >> n1 >> n2 >> n3;

    Maximum(n1, n2, n3);
    Minimum(n1, n2, n3);

    return 0;
}