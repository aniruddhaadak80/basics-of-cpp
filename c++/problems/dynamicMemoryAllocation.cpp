#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Dynamic memory allocation for integer
    int *num_ptr = new int; // use new keyword for dynamic memory  allocation
    cout << "Enter  the value of num_ptr : ";
    cin >> *num_ptr;                                           // Dynamically allocate memory for integer
    cout << "Number is : " << *num_ptr << endl;                //  ---->  allocated in heap memory
    cout << "Address of number num_ptr is  : " << num_ptr << endl; // ---> address of *num_ptr

    // dynamic memory allocation for  array
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int *arr_ptr = new int[n];
    cout << "Size of array arr_ptr is : " << n << endl;
    cout << "Enter elements one by one : " << endl;

    // taking input from user 
    for (int i = 0; i < n; i++)
    {
        cin >> arr_ptr[i]; // don't use *ptr[i]
    }

    cout << "All elements of arr_ptr array are  : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout <<arr_ptr[i] << endl; // print elements one by one
    }

    delete[] arr_ptr; // memory delete for array
    delete num_ptr;   // memory delete for num
}