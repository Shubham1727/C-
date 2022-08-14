#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        int last_digit = n % 10;
        // cout << last_digit;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }

    cout << reverse;

    return 0;
}