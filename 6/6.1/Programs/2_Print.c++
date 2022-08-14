#include <iostream>
using namespace std;

void print(int n)
{
    cout << n;
    return;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    print(a);
    return 0;
}