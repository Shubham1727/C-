#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
    int n;
    n = num1;
    num1 = num2;
    num2 = n;
    cout << num1 << endl
         << num2;
}
int main()
{
    int n1, n2;
    cout << "Enter two numbers\n";
    cin >> n1 >> n2;
    swap(n1, n2);
    return 0;
}