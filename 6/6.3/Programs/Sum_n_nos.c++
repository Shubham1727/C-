#include <iostream>
using namespace std;

int sum(int num)
{
    int ans=0;
    for (int i = 1; i <= num; i++)
    {
        ans= ans + i;
    }
    return ans;
}

int main()
{
   int i;
    cin >> i;
   cout << sum(i);
    return 0;
}