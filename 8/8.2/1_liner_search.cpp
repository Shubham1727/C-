#include <iostream>
using namespace std;

int search(int n, int key, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }


        
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

     cout << search(n , key, array);
    return 0;
}