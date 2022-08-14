#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Enter the value of n\n";
    cin >> n;
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of first " << n << " numbers is " << sum;

    return 0;
}