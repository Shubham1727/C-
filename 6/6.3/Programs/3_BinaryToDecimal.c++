#include <iostream>
using namespace std;

int BinarytoDecimal(int num)
{
    int ans = 0, x = 1;
    while (num > 0)
    {
        int y = num % 10;
        ans += x * y;
        x *= 2;
        num /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in decimal is " << BinarytoDecimal(n);
    return 0;
}