#include <iostream>
using namespace std;

int main()
{

    int x, y;
    float p;
    char z;

    cout << "enter the two no." << endl;
    cin >> x >> y;
    cout << "enter operation" << endl;
    cin >> z;
    switch (z)
    {
    case 's':

        cout << x + y << endl;
        break;

    case 'd':

        cout << x - y << endl;
        break;

    case 'm':

        cout << x * y << endl;
        break;

    case 'D':
        cout << x / y << endl;
        break;

    default:
        cout << "i am still learning" << endl;
        break;
    }

    return 0;
}