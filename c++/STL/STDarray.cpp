/*
Date -11/12/2023
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // STL array --> although it  is stl array but you have to initialize the size of array .
    array<int, 5> a = {1, 2, 3, 4, 5};
    // print  STL array
    cout << "All array(a) elements are : " << endl;
    for (auto itr : a)
    {
        cout << itr << endl;
    }

    // access elements in array
    cout << "Element at index 2 for array a is : " << a.at(2) << endl;
    cout << "Front element : " << a.front() << endl;
    cout << "Last element : " << a.back() << endl;
    cout << "Is a empty ? -->  " << a.empty() << endl;
    cout << "Size of array a is : " << a.size() << endl;

    // Array fill method
    array<int, 6> ar2;
    ar2.fill(9);
    cout << "Fill all array(ar2) with element  9 : ";
    for (auto itr : ar2)
    {
        cout << itr << " ";
    }
    cout << endl;

    // Normal c type  array initialisation
    cout << "Normal c type array initialisation : ";
    int arr[4]{34, 45, 56, 67};
    for (int itr : arr)
    {
        cout << itr << " ";
    }
}