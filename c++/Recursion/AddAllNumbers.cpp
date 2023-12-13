/*
*  Date -7/12/2023
*/

#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if (n < 0)
    {
        return 0;
    }

    if (n != 0)
    {
        return n + Sum(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a positive number : ";
    cin >> n;
    cout << "Sum of 1 to " << n << " is : " << Sum(n) << endl;
}