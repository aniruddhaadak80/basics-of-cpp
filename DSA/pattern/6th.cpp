/*
your required pattern is  :

Enter a number : 4
Your required pattern is :
1
2 1
3 2 1
4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, row, col, count = 1;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Your required pattern is : \n";
    row = 1;
    while (row <= n)
    {
        col = 1;

        while (col <= row)
        {
            cout << row - col + 1 << " "; // formulae ----> row-col+1
            col++;
        }
        cout << endl;
        row++;
    }
}