/*you have to print :--------->

Enter a number : 4
Your required pattern is :
1234
1234 
1234
1234

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
    while (i <= n)
    {
   
        j = 1;
        while (j <= n)
        {
           
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}