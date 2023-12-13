#include "bits/stdc++.h"
using namespace std;

int main()
{
    int decimal_num;
    int binary;
    cout << "Enter a decimal number" << endl;
    cin >> decimal_num;

    while (decimal_num > 0)
    {
        binary = decimal_num % 2;
        cout << binary << " ";
        decimal_num /= 2;
    }
}
