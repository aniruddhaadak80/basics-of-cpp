/*
Date -11/12/2023 

*/

#include <bits/stdc++.h>
using namespace std;

// syntax of templates
template <typename T>
T maxNumber(T x, T y)
{
    return (x > y) ? x : y;
}

// syntax for minnumber
template <typename T>
T minNumber(T x, T y)
{ // you can use same template name T for multiple times
    return x < y ? x : y;
}

int main()
{
    //**********************************   for maximimum number   ************************
    // Max integer by using templates
    cout << "Maximum number : " << maxNumber<int>(2, 3) << endl;

    // Max floting point number  by using templates
    cout << "Maximum number : " << maxNumber<double>(3.4, 5.4) << endl;

    // Max string by using templates
    cout << "Maximum string : " << maxNumber<string>("anam", "sksks") << endl;


    //**********************************   for minimum number   ************************
    // Min integer by using templates
    cout << "Minimum number : " << minNumber<int>(2, 3) << endl;

    // Min floting point number  by using templates
    cout << "Minimum number : " << minNumber<double>(3.4, 5.4) << endl;

    // Min string by using templates
    cout << "Minimum string : " << minNumber<string>("anam", "sksks") << endl;

    return 0;
}