#include <iostream>
using namespace std;

int OctaltoDecimal(int num)
{
    int ans = 0, x = 1;
    while (num > 0)
    {
        int y = num % 10;
        ans += x * y;
        x *= 8;
        num /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter an octal number: ";
    cin >> n;
    cout << n << " in decimal is " << OctaltoDecimal(n);
    return 0;
}