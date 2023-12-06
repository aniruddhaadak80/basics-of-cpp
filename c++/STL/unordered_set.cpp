/*
Date : 7 /12/2023 at 12:40 -1:10 am night 
Topics :- 1.unordered set  STL
          2.Don't follow ordered 
          3.Print all elements as well as size of unordered set

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{

    //********************* unordered set implementation ***********************
    unordered_set<int> uset;
    //****************** insert elements one by one *************
    uset.insert(35);
    uset.insert(3);
    uset.insert(5); //! don't allow duplicates
    uset.insert(5); //! don't allow duplicates
    uset.insert(5); //! don't allow duplicates
    uset.insert(350);
    uset.insert(75);
    uset.insert(25);

    //******************** Print all elements of unordered set  ************************
    cout << "All elements of unordered set are : ";
    for (auto itr : uset)
    {
        cout << itr << " "; // 35 5 75 350 25 3 (don't follow sored order or don't allow duplicates)
    }

    cout << endl;

    //***************************** size of unordered set  ******************
    cout << "Size of unordered set : " << uset.size() << endl; // 6 (don't allow duplicate elements )

    //***************************** Add all elements of unordered set  ******************
    cout << "The sum of all elements of unordered set : " << accumulate(uset.begin(), uset.end(), 0) << endl; // 493

    return 0;
}