/*
Date -->  6/12/2023 at 2:30pm to 3:30 pm afternoon.
Topics :- 1.
          2.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //***************** 1.Ordered map i.e ---> MAP STL (map means ordered  map) ******************
    map<int, string> Student_details;

    // Insert elements in map using pair of int(key) and string(value)
    Student_details.insert(pair<int, string>(1, "Aniruddha"));
    Student_details.insert(pair<int, string>(2, "Rahul"));
    Student_details.insert(pair<int, string>(3, "Nilima"));
    Student_details.insert(pair<int, string>(4, "Puish"));

    // Size of the map name Student_details 
    cout << "Size of map name Student_details is : " << Student_details.size() << endl;
    cout << "Maximum Size of map name Student_details is : " << Student_details.max_size() << endl;

    // Display all pairs in map
    for (auto pair : Student_details)
    {
        cout << "Roll no : " << pair.first << " ---> " << pair.second << endl;
    } //? All pairs display in ordered manner

    // clear entire  map
    Student_details.clear();
    cout << "After clear all elements theSize of map name Student_details is : " << Student_details.size() << endl;

    //***************** 2.Unordered_map --> don't follow dictionary order *********************
    unordered_map<string, string> Address;

    Address.insert(pair<string, string>("Bird", "Tree"));
    Address.insert(pair<string, string>("Lion", "Forest"));
    Address.insert(pair<string, string>("Human", "House"));
    Address.insert(pair<string, string>("Fish", "Water"));

    // Size of map
    cout << "Size of unordered_map name Address is : " << Address.size() << endl;
    cout << "Maximum Size of unordered_map name Address is : " << Address.max_size() << endl;

    // print all addresses in the unordered list
    for (auto pair : Address)
    {
        cout << "Address of " << pair.first << " --->  " << pair.second << endl;
    }
    
}