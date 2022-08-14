#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cout << "Enter a positive integer whose multiplication table you want\n";
    cin >> n;
    cout << "Enter a positive integer till which you want the multiplication table\n";
    cin >> p;

    for (int i = 1; i <= p; i++)
    {
        cout << n << "X" << i << "=" << n * i << endl;
    }

    return 0;
}