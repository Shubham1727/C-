#include <iostream>
using namespace std;
int dtob(int num)
{
    int ans = 0;
    int x = 1;
    while (num > 0)
    {
        int s = num % 2;
        ans += s * x;
        x *= 10;
        num /= 2;
    }
    int reverse = 0;
    while (ans > 0)
    {
        int last_digit = ans % 10;
        reverse = reverse * 10 + last_digit;
        ans = ans / 10;
    } 
return reverse;
    
}

int main()
{
    int i;
    cin >> i;
    cout << dtob(i);

    return 0;
}