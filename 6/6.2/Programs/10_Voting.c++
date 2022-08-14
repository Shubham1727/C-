#include <iostream>
using namespace std;

bool Eligibility(int n)
{
    if (n >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int age;
    cout << "Enter you age\n";
    cin >> age;
    if (Eligibility(age))
    {
        cout << "You are eligible to vote\n";
    }
    else
    {
        cout << "You are not eligible to vote\n";
    }

    return 0;
}