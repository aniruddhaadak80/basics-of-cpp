#include <bits/stdc++.h>
using namespace std;

// syntax of templates 
template <typename T>
T maxNumber(T x, T y)
{
    return (x > y) ? x : y;
}


int main()
{

    // Max integer by using templates
    cout << maxNumber<int>(2, 3);

    // Max floting point number  by using templates
    cout << maxNumber<double>(3.4, 5.4);

    // Max string by using templates
    cout << maxNumber<string>("anam", "sksks");

    return 0;
}