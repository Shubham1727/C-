#include <iostream>
using namespace std;
int btod(int num)
{
    int ans=0;
    int x = 1;

    while (num > 0)
    {
        int y = num % 10;
        ans += x * y;
        x *= 2;
        num = num / 10;
    }
    return ans;
}

int main()
{
    int i;
    cin >> i;
    cout << btod(i);

    return 0;
}