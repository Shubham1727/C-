// A simple Caclulator
#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "Input 2 numbers: ";
    cin >> n1 >> n2;

    char op;
    cout << "Input an operator ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 << "+" << n2 << " = " << n1 + n2;
        break;

    case '-':
        cout << n1 << "-" << n2 << " = " << n1 - n2;
        break;

    case '*':
        cout << n1 << "*" << n2 << " = " << n1 * n2;
        break;

    case '/':
        cout << n1 << "/" << n2 << " = " << n1 / n2;
        break;

        // case '%':
        //     cout << n1 << "%" << n2 << " = " << n1 % n2;
        //     break; --> float ke saath mod operator use nhi ho skta

    default:
        cout << "Enter another operator";
        break;
    }
    return 0;
}