/*
you have to print

Enter a number : 4
Required pattern is: 
1 
2 3 
4 5 6 
7 8 9 10 

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, row, col ,count;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Required pattern is: " << endl;
    row = 1;
    count =1;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}