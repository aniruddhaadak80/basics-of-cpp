#include <bits/stdc++.h>
using namespace std;
// *********************   Array Of Piointers   *********************************************
int main()
{
    char letter = 'a';
    char *pltr = &letter;
    cout << letter << endl;  // a
    cout << &letter << endl; // aT a or amé}v0∟@  sometimes (random value  for each time with gaps between)
    cout << pltr << endl;    // aT a  or amé}v0∟@  sometimes (random value  for each time with gaps between)


    // pointer of strings 
    char arr[] = "abcdefgh";
    char *ptr = arr;
    cout << arr << endl;        // abcdefgh
    cout << &arr << endl;       // 0x61ff03
    cout << &arr[0] << endl;    // abcdefgh
    cout << ptr << endl;        // abcdefgh
    cout << ptr + 1 << endl;    // bcdefgh
    cout << ptr + 2 << endl;    // cdefgh
    cout << *ptr << endl;       // a
    cout << *(ptr + 1) << endl; // b


    // array of integer
    int arrint[] = {1, 2, 3, 4, 5, 6};
    int *ptrarrint = arrint;


    // display all elements with pointer
    cout << "All elements with pointer" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptrarrint + i) << '\n';
        //  ptrarrint++ ; //don't do this
    }
}