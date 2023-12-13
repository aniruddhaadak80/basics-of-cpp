/*
Date -12/12/2023 (modified)
?  Info --> vector = array + list(linked list)
? how vector internally store elements

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    cout << "Size of vector before inialization : " << v.size() << endl; // output : 0

    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);

    cout << "Now size : " << v.size() << endl; // Now output :5

    cout << "Display of vector : " << endl; // Display the vector
    // display the vector
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << endl;
    }
    cout << "Capacity of vector v after inserting elements : " << v.capacity() << endl; // 8

    cout << "see size and capacity to understand how vector internally works " << endl;
    vector<int> v2;
    for (int i = 0; i < 30; i++)
    {
        v2.push_back(i);
        cout << "Size -> " << v2.size() << "  Capacity -> " << v2.capacity() << endl;
    }

    return 0;
}