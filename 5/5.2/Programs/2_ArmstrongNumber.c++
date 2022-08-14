#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int original_n = n;

    while (n > 0)
    {
        int last_digit = n % 10;
        sum += pow(last_digit, 3);
        n = n / 10;
    }

    if (original_n == sum)
    {
        cout << "It is an armstrong number";
    }

    else
    {
        cout << "It is not an armstrong number";
    }

    return 0;
}