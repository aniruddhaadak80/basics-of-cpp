#include <bits/stdc++.h>
using namespace std;
int main()
{
    //! vector initialization
    vector<int> v(5, 3); // v(size,element)
    vector<int> v2;
    cout << "All elements of vector v  are : " << endl;
    //! displa all elements of vectors
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }

    //! vector for different element
    vector<int> v1 = {3, 4, 5, 6, 7, 3, 2};
    cout << "All elements of vector v1 are : " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << v1[i] << endl;
    }

    //! front and back in v1
    cout << "First element in vector 1 i.e v1 is : " << v1.front() << endl;
    cout << "First element in vector 1 i.e v1 is : " << *v1.begin() << endl; //* "v1.begin()"  points to the first element of vector 1.
    cout << "First element in vector 1 i.e v1 is : " << v1[0] << endl;

    cout << "Last element in vector 1 i.e v1 is : " << v1.back() << endl;
    cout << "Last element in vector 1 i.e v1 is : " << *(v1.end() - 1) << endl;   //? as "v1.end()" points to the after end value of vector 1.
    cout << "Last element in vector 1 i.e v1 is : " << v1[v1.size() - 1] << endl; // as it is the last element of v1

    //! size of all vectors
    cout << "Size of v is : " << v.size() << endl;   // 5 ---> as I have not decleared the size of the vector
    cout << "Size of v1 is : " << v1.size() << endl; // 7 ---> as I have not decleared the size of the vector
    cout << "Size of v2 is : " << v2.size() << endl; // 0 ---> as I have not decleared the size of the vector

    //!  capacity of all vectors
    cout << "Capacity of v is : " << v.capacity() << endl;   // 5 ---> as I have not decleared the size of the vector
    cout << "Capacity of v1 is : " << v1.capacity() << endl; // 7 ---> as I have not decleared the size of the vector
    cout << "Capacity of v2 is : " << v2.capacity() << endl; // 0 ---> as I have not decleared the size of the vector

    //! copy one vector to another one
    v2 = v1;
    cout << "Capacity of v2 after copying all elements from v1 is : " << v2.size() << endl; //* 7

    //! print all elements of  v2 using for-of loop
    cout << "All elements of v2 after copying all elements from v1 are : " << endl;
    for (auto itr : v2)
    {
        cout << itr << endl;
    }

    // sort all elements of v2 using sort() method
    //* in assending order
    cout << "Sorting of v2 in assending order is : " << endl;
    sort(v2.begin(), v2.end());
    for (auto itr : v2)
    {
        cout << itr << endl;
    }

    //* sort v2 in decending order
    cout << "Sorting of v2 in decending order is : " << endl;
    sort(v2.begin(), v2.end(), greater<int>()); //! you can also use " sort(v2.rbegin(), v2.rend()) " to sort in decending order
    for (auto itr : v2)
    {
        cout << itr << endl;
    }

    //* print v2 after all operations
    cout << "Now vector v2 is in decending order as it was the last operations I did with it  : " << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl; // using for loop
    }

    //! Binary search in vector using STL
    cout << "Search 2 in  in v2 : " << endl;
    cout << binary_search(v1.begin(), v1.end(), 2) << endl; // I don't know but something wrong .. It should be 1 as 2 exists in v2 ...
}
