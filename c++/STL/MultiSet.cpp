/*
Date : 5 /12/2023 at 1:30am -2:40 am night
Topics :- 1.multiset STL
          2.count of elements in multiset
          3.find if the multiset is empty or not
          4.Use C programming in C++
          5.maximum Size of multiset
          6.Print the Size of the multiset
          7.Size of multiset

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // multiset :---> It can store one element more than one time
    multiset<int> mult;
    mult.insert(30);
    mult.insert(40);
    mult.insert(30);
    mult.insert(10);
    mult.insert(20);
    mult.insert(70);
    mult.insert(10);

    //* traversal or print all elements in multiset  :--->
    cout << "All elements in multiset are : ";
    for (auto it : mult)
    {
        cout << it << " "; // 10 10 20 30 30 40 70
    }
    cout << endl; // add new line after completing loop

    //*****************  Print the Size of the multiset :--->
    cout << "Size of multiset is : " << mult.size() << endl;

    //************ count of elements in multiset  :--->
    int mult_set_count = count(mult.begin(), mult.end(), 10);
    cout << "Count of 10 in multiset is : " << mult_set_count << endl;

    //*********** find if the multiset is empty or not :--->
    int is_mult_set_empty = mult.empty();
    cout << "Is multiSet Empty ? :-->" << is_mult_set_empty << endl;

    //****************** maximum Size of multiset :--->
    cout << "Maximum Size of multiset is : " << mult.max_size() << endl;

    //*******************  Add all elements of multiset *******************
    cout << "Adding all elements of multiset : " << accumulate(mult.begin(), mult.end(), 0) << endl;

    //******************** Erase all 10 from multiset ****************
    cout << "Removing all 10 from multiset : " << mult.erase(10) << endl; // 2

    //****************** clear the multiset ************************
    mult.clear();

    //************************** Now Print the Size of the multiset :--->
    cout << "Now after clearing all elements from multiset the  Size of multiset is : " << mult.size() << endl;

    //****************  Use C programming in C++ ***************
    printf("I can now use printf in my c++ program \n");
    int a;
    cout << "Enter a number : " << endl;
    scanf("%d", &a);
    printf("Your number is : %i ", a);

    return 0;
}
