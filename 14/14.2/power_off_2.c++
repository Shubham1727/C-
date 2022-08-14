#include <iostream>
using namespace std;

bool power_of_two(int n)
{
    return (n && !(n & n - 1));
}

int main()
{

    cout << power_of_two(14) << endl;

    return 0;
}