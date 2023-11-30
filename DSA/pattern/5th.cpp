/*
your required pattern is  :

Enter a number : 4
Your required pattern is :
1
2 3
3 4 5
4 5 6 7

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, row, col, val;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Your required pattern is : \n";
    row = 1;
    while (row <= n)
    {
        col = 1;
        val = row;
        while (col <= row)
        {
            cout << val << " ";
            val++;
            col++;
        }
        cout << endl;
        row++;
    }
}