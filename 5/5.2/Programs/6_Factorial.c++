#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "The value of " << n << "! is " << factorial;

    return 0;
}