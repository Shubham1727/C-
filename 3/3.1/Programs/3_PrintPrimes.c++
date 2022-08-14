#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers\n";
    cin >> a >> b;
    for (int num = a; num < b; num++)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                c = 0;
                break;
            }
            else
            {
                c = 1;
            }
        }

        if (c == 1)
        {
            cout << num << " ";
        }
    }

    return 0;
}