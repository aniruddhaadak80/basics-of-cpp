/*
you have to print 

Enter a nimber : 4
Required pattern is: 
*
**
***
****

*/



#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "Required pattern is: "<< endl;
    row = 1;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}