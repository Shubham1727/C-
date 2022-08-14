#include <iostream>
using namespace std;

void check(int n1, int n2, int n3)
{
    int a, b, c;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            a = n1;
            b = n2;
            c = n3;
        }
        else
        {
            a = n3;
            b = n1;
            c = n2;
        }
    }
    else
    {
        if (n2 > n3)
        {
            a = n2;
            b = n1;
            c = n3;
        }
        else
        {
            a = n3;
            b = n1;
            c = n2;
        }
    }

    if (a * a == b * b + c * c)
    {
        cout << n1 << ", " << n2 << " & " << n3 << " are Pythagorean Triplets";
    }

    else
    {
        cout << n1 << ", " << n2 << " & " << n3 << " are not Pythagorean Triplets";
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers\n";
    cin >> n1 >> n2 >> n3;
    check(n1, n2, n3);
    return 0;
}