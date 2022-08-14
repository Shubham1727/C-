#include <iostream>
using namespace std;

void Alphabet(char c)
{
    int ascii = c;
    if ((ascii >= 65 && ascii <= 90) || (ascii <= 122 && ascii >= 97))
    {
        cout << c << " is an alphabet.";
    }
    else
    {
        cout << c << " is not an alphabet.";
    }
}

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;

    Alphabet(c);

    return 0;
}