/*
Date - 7/12/2023 
*/

#include <bits/stdc++.h>
using namespace std;

// factorial recursve  function
int Fact(int num)
{

    if (num == 0 || num < 0)
    {
        return 1;
    }

    else if (num > 1)
    {
        return num * Fact(num - 1);
    }
}

int main()
{

    //*************************  With Iterative Way ****************************
    // int num, fact = 1;

    // cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact * i;
    // }
    // cout << fact << endl;

    //*************************  With recursive Way ****************************
    int num;
    cout << "Enter number : ";
    cin >> num;
    int factorial = Fact(num);
    cout << factorial << endl;
}