/*
Date : 7 /12/2023 at 12:00 -12:30 am night 
Topics :- 1.iset STL
          2.count of elements in set
          3.Duplicates are not allowed

*/

#include <bits/stdc++.h>
using namespace std;

// display the set for integer set
void display(set<int> name)
{
    for (auto it : name)
    {
        cout << it << endl;
    }
}

int main()
{

    //********************** Define set  ***************************
    set<int> s1;
    unordered_set<string> str;

    // insert s1 elements into set
    s1.insert(30);
    s1.insert(40);
    s1.insert(40); //! set don't consider duplicates elements
    s1.insert(40); //! set don't consider duplicates elements
    s1.insert(10);
    s1.insert(20);
    s1.insert(60);

    // Print all elements  using display function
    display(s1); // output --- > 10 20 30 40 60

    //count :-->  number of 40 in s1
    cout << "Number of 40 in set : " << count(s1.begin(), s1.end(), 40) << endl; // 1

    // Add all elements in s1
    cout << "Sum of all numbers in set is : " << accumulate(s1.begin(), s1.end(), 0) << endl; // 160

    // Size of s1 set
    cout << "Size of s1 is : " << s1.size() << endl; // 5

    s1.clear();

    cout << "Size of s1 after clear all elements is : " << s1.size() << endl; // 0

    // Insert all elements into str and print them
    str.insert("Ani");
    str.insert("I");
    str.insert("Love");
    str.insert("you");
    str.insert("&&");
    str.insert("C++");

    cout << "String set : "
         << " ";

    // display the string set
    for (auto itr : str)
    {
        cout << itr << " ";
    }
}