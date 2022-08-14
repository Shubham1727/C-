#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n, r;
    cout << "Enter value of n and r\n";
    cin >> n >> r;
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "The value of " << n << "C" << r << " is " << ans;
    return 0;
}