#include <iostream>
using namespace std;

int main()
{

    int n, reverse = 0;
    cout << "Enter the value  no. ";
    cin >> n;

    while (n > 0)
    {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }

    cout << reverse;

    return 0;
}