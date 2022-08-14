#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is " << add(a, b);
    return 0;
}