#include <iostream>
using namespace std;
int dtoo(int num)
{
    int ans = 0;
    int x = 1;
    while (num > 0)
    {
        int s = num % 8;
        ans += s * x;
        x *= 10;
        num /= 8;
    }
   
return ans;
    
}

int main()
{
    int i;
    cin >> i;
    cout << dtoo(i);

    return 0;
}