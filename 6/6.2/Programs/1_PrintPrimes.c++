#include <iostream>
using namespace std;

bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}