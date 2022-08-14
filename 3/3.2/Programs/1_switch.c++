#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Enter a character: ";
    cin >> button;
    // if (button == 'a')
    // {
    //     cout << "Hello";
    // }
    // else if (button == 'b')
    // {
    //     cout << "Namaste";
    // }
    // else if (button == 'c')
    // {
    //     cout << "Kon'nichiwa";
    // }
    // else if (button == 'd')
    // {
    //     cout << "Hola";
    // }
    // else
    // {
    //     cout << "I am still learning more";
    // }

    switch (button)
    {
    case 'a':
        cout << "Hello";
        break;

    case 'b':
        cout << "Namaste";
        break;

    case 'c':
        cout << "Kon'nichiwa";
        break;

    case 'd':
        cout << "Hola";
        break;

    default:
        cout << "I am still learning more";
        break;
    }

    return 0;
}