// Pascal's Triangle
#include <iostream>
using namespace std;
int main()
{
    int n, first = 1;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                first = 1;
            }

            else
            {
                first = first * (i + 1 - j) / j;
            }
            cout << first << " ";
        }
        cout << endl;
    }

    return 0;
}