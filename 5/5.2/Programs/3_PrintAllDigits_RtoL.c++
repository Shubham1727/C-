#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        int rev = n % 10;
        cout << rev << endl;
        n = n / 10;
    }

    return 0;
}