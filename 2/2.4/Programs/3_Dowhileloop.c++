#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    do
    {
        cout << n << " ";
        n++;
    } while (n <= 10);

    return 0;
}