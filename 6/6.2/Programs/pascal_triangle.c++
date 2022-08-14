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

    int n;
    cout << "Enter the value of row ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = factorial(i) / (factorial(j) * factorial(i - j));
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}