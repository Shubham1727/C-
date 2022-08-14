#include <iostream>
using namespace std;

void factorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "The value of " << num << "! is " << factorial;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    factorial(n);

    return 0;
}