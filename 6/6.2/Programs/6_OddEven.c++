#include <iostream>
using namespace std;

void OddEven(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is an even number.";
    }

    else
    {
        cout << num << " is an odd number.";
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    OddEven(n);
    return 0;
}