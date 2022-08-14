#include <iostream>
using namespace std;
void febo(int num)
{
   int t1 = 0, t2 = 1, nextTerm;
    for (int i = 1; i <= num; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
   }
int main()
{
    int s;
    cin >> s;

    febo(s);

    return 0;
}