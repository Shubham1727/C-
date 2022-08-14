#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            a = 1;
        }

        else
        {
            continue;
        }
    }
    if (a == 1)
    {
        cout << "Is/Are the factor(s) of " << n;
    }

    else
    {
        cout << "The number you entered is a prime number";
    }

    return 0;
}