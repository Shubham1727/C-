// Hollow diamond inside a rectangle
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * i - 3; j++)
        {
            cout << "  ";
        }
        if (i == 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * i - 3; j++)
        {
            cout << "  ";
        }
        if (i == 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
    return 0;
}