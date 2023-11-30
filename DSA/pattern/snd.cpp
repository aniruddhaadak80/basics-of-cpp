/*you have to print :--------->

Enter a number : 4
Your required pattern is : 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Your required pattern is : " << endl;
    i = 1;
    int count = 1;
    while (i <= n)
    {

        j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}