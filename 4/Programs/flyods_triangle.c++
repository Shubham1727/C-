#include <iostream>
using namespace std;

int main()
{

    int n , z=1;
    cout << "Enter the value of row ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << z << " " ;
            z++;
        }
        cout << endl;
    }

    return 0;
}