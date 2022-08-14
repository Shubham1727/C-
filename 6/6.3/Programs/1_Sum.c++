#include <iostream>
using namespace std;

int sum(int num)
{
    int ans = 0;
    for (int i = 1; i <= num; i++)
    {
        ans += i;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of first " << n << " numbers is " << sum(n);
    return 0;
}