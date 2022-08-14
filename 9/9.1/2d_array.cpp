#include <iostream>
#include "bits/stdc++.h"
using namespace std;

//PRINTING A MATRIX IN SPIRAL ORDER

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int rowstart = 0, rowend = n - 1, coloumnstart = 0, coloumnend = m - 1;

    while (rowstart <= rowend && coloumnstart << coloumnend)
    {
        for (int col = coloumnstart; col <= coloumnend; col++)
        {
            cout << a[rowstart][col] << " ";
        }
        rowstart++;

        for (int row = rowstart; row <= rowend; row++)
        {
            cout << a[row][coloumnend] << " ";
        }
        coloumnend--;

        for (int col = coloumnend; col >= coloumnstart; col--)
        {
            cout << a[rowend][col] << " ";
        }
        rowend--;

        for (int row = rowend; row >= rowstart; row--)
        {
            cout << a[row][coloumnstart] << " ";
        }
        coloumnstart++;
    }
    return 0;
}

