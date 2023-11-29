#include <bits/stdc++.h>
using namespace std;
// ********************* Array Of Piointers **************************************
int main()
{
    char letter = 'a';
    char *pltr = &letter;
    cout << letter << endl;  // a
    cout << &letter << endl; // aT a (random value  for each time with gaps between)
    cout << pltr << endl;    // aT a (random value  for each time with gaps between)
    char arr[] = "abcdefgh";
    char *ptr = arr;
    cout << arr << endl;  // abcdefgh
    cout << &arr << endl; // 0x61ff03
    cout << &arr[0] << endl;
    cout << ptr << endl;        // abcdefgh
    cout << ptr + 1 << endl;    // bcdefgh
    cout << ptr + 2 << endl;    // cdefgh
    cout << *ptr << endl;       // a
    cout << *(ptr + 1) << endl; // b
}