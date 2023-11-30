#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Dynamic memory allocation for integer
    int *num = new int;
    cout << "Enter  the value of num : ";                  // use new keyword for dynamic memory  allocation
    cin >> *num;                                           // Dynamically allocate memory for integer
    cout << "Number is : " << *num << endl;                //  ---->  allocated in heap memory
    cout << "Address of number num is  : " << num << endl; // ---> address of *num

    // dynamic memory allocation for  array
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int *ptr = new int[n];
    cout << "Size of array ptr is : " << n << endl;
    cout << "Enter elements one by one : " << endl;

    // taking input from user
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i]; // don't use *ptr[i]
    }

    cout << "All elements are  : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << endl; // print elements one by one
    }

    delete[] ptr; // memory delete for array
    delete num;   // memory delete for num
}