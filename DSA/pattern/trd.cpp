/*
you have to print

Enter a number : 4
Required pattern is:
1
2 2
3 3 3
4 4 4 4

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Required pattern is: " << endl;
    row = 1;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}