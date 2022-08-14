// Hollow diamond pattern using stars
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (j = 1; j < (i - 1) * 2; j++)
        {
            cout << " ";
        }
        if (i == 1)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (j = 1; j < (i - 1) * 2; j++)
        {
            cout << " ";
        }
        if (i == 1)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}