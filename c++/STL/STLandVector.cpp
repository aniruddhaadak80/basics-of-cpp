/*
******************  I learned this topic in 1/11/2023 by coder army youtube channel on yourube  **************
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //! vector initialization
    vector<int> v(5, 3); // v(size,element) //*   output ----> 3,3,3,3,3
    vector<int> v2;
    cout << "All elements of vector v  are : " << endl;
    //! display all elements of vectors
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
    //* for assending order
    cout << "Sorting of v2 in assending order is : " << endl;
    sort(v2.begin(), v2.end());
    for (auto itr : v2)
    {
        cout << itr << endl;
    }

    //* sort v2 for decending order
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
    cout << binary_search(v2.begin(), v2.end(), 2) << endl; // I don't know but something wrong .. It should be " 1 " as 2 exists in v2 ...


    //********************** update in 3/12/2023 ************************
    //! minimum_element ,maximum_element , addinf all elements of vector using STL
    vector<int> vec2 = {1, 2, 3, 4, 2, 3, 6};

    int minnimum_element = *min_element(vec2.begin(), vec2.end());
    int maxnimum_element = *max_element(vec2.begin(), vec2.end());
    int Add_all_elements = accumulate(vec2.begin(), vec2.end(), 0);
    int Count_of_elements = count(vec2.begin(), vec2.end(), 3);

    cout << "Minimum element of vec2 is  : " << minnimum_element << endl;        // 1
    cout << "Maximum element of vec2 is  : " << maxnimum_element << endl;        // 6
    cout << "Addition of all elements of vec2 is :" << Add_all_elements << endl; // 21
    cout << "Number of 3 in vec2 is  : " << Count_of_elements << endl;           // 2

    //! reverse the vector and string using STL
    // for vector
    cout << "Reverse of vec2 is :--->  " << endl;
    reverse(vec2.begin(), vec2.end());
    for (auto rev : vec2)
    {
        cout << rev << endl;
    }

    // for string
    string Myname = "ANIRUDDHA ADAK";
    reverse(Myname.begin(), Myname.end());
    cout << "My reverse name looks like :--->  " << Myname << endl;

    return 0;
}
