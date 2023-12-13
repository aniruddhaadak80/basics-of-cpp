/*
Date :=> 5/12/2023 at 8:30 pm to 9:00pm at evening at night 11:00pm to 12:00pm
Topics : => 1.Uniform Initialization in C++11
            2.Initialization of arrays in C++11 (for both vector and array)
            3.Move sementics from source to destination

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //**********************   1. Uniform Initialization in C++  *****************
    int *ptr = new int[3]{1, 2, 3};
    // traverse
    for (int i = 0; i < 3; i++)
    {
        cout << ptr[i] << "  ";
    }

    cout << endl;

    //**********************  2. Initialization of arrays in C++11 ****************
    array<int, 5> arr{1, 2, 3, 4, 5}; // Initialized array with uniform way (Discuss earlier)
    cout << "All elements of array \"arr\" are : ";
    // for each loop in c++11
    for (auto it : arr)
    {
        cout << it << " ";
    }

    cout << endl;

    //******************** 3. Move sementics from source to destination   ****************
    vector<int> source{5, 6, 8, 3, 2};
    cout << "All elements of vector \"source\" are : ";
    for (auto it : source)
    {
        cout << it << " ";
    }

    cout << endl;

    vector<int> destination = move(source);
    cout << " Now all elements of vector \"destination\" are : ";
    for (auto it : destination)
    {
        cout << it << " ";
    }

    //?  If you want to print the source now you can not see anything in consoleoutput
    cout << "\nAfter moving all elements from source to destination all elements of vector \"source\" are : ";
    for (auto it : source)
    {
        cout << it << " ";
    }

    //********************** 4.structured bindings in c++17  ***************************
    // pair<int, double> Data(9, 3.14);
    // auto [myFavNum, PI] = Data;
    // cout << "myFavNum: " << myFavNum;
    //! something wrong with the code above
    
}