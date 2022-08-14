#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number\n";
            break;
        }
        else
        {
            cout << n << " is a prime number\n";
            break;
        }
    }

    return 0;
}