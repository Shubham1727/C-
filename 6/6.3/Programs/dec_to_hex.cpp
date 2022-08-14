#include <iostream>
using namespace std;
string dtoh(int num)
{
    string ans = "",q="";
    int x = 1;
    int z=0;
    while (num > 0)
    {
        int s = num % 16;
        if (s > 9)
        {
            if (s == 10)
            {
                s = 'A';
            }
            else if (s == 11)
            {
                s = 'B';
            }
            else if (s == 12)
            {
                s = 'C';
            }
            else if (s == 13)
            {
                s = 'D';
            }
            else if (s == 14)
            {
                s = 'E';
            }
            else if (s == 15)
            {
                s = 'F';
            }
            q = q + to_string(s * x);
            x *= 10;
        }
        else if (s <= 9)
        {
            z = z + s * x;
            x *= 10;
        }
        num /= 16;
    }
    ans = q + to_string(z*10);
    return ans;
}

int main()
{
    int i;
    cin >> i;
    cout << dtoh(i);

    return 0;
}