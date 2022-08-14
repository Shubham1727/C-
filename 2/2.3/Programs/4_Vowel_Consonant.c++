#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter an alphabet\n";
    cin >> c;
    int uppercase, lowercase;
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (uppercase || lowercase)
    {
        cout << "The alphabet is a vowel";
    }

    else
    {
        cout << "The alphabet is a consonant";
    }

    return 0;
}
