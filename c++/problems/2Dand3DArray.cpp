/*
Date -->
Topics :-

*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    // For 1D arrays
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;
    int *ptr1 = new int[n];

    cout << "Enter all elements of Array one by one : " << endl;
    for (auto i = 0; i < n; i++)
    {
        cin >> ptr1[i];
    }

    cout << "All elements of Array are : " << endl;
    for (auto i = 0; i < n; i++)
    {
        cout << ptr1[i] << " ";
    }

    
}