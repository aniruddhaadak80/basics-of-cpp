// date - 30/11/2023 by coder army youtube channel

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Aniruddha with c++ pointer by coder army  ";
    string *my_name = &name;
    cout << "Size of string pointer is  : " << sizeof(my_name) << endl; // 4

    int num = 10;
    int *ptr = &num;
    cout << "size of integer pointer is  : " << sizeof(ptr) << endl; // 4

    char ch = '@';
    char *pterc = &ch;
    cout << "size of charecter pointer is  : " << sizeof(pterc) << endl; // 4

    float f = 3.23;
    float *fptr = &f;
    cout << "size of floating  pointer is  : " << sizeof(fptr) << endl; // 4

    double d = 34.45;
    double *dptr = &d;
    cout << "size of double  pointer is  : " << sizeof(dptr) << endl; // 4

    long long int n = 1000000000;
    long long int *ptrlong = &n;
    cout << "size of long long integer pointer is  : " << sizeof(ptrlong) << endl; // 4
}

//****  Size of any pointer depends on the size of  the Ram in my computer
//?  It is not depends on the size of any dats type