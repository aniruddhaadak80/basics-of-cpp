/*
Date -->  6/12/2023 at 10:30 to 11:00 pm at night .
Topics :- 1.Ordered map i.e ---> MAP STL (map means ordered  map)
          2.Unordered_map --> don't follow dictionary order
          //*  Update -> 13/12/2023 at 23:45pm -00.00am night 
          3.map for decending order structure(using greater operator) 
          4.multimap --> store more than one similer key for different or same values 

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
    unordered_map<string, string> Address = {{"Bird", "Tree"}, {"Lion", "Forest"}, {"Human", "House"}, {"Fish", "Water"}};

    //********** you can use this following too but it is too leanthy ********************
    // Address.insert(pair<string, string>("Bird", "Tree"));
    // Address.insert(pair<string, string>("Lion", "Forest"));
    // Address.insert(pair<string, string>("Human", "House"));
    // Address.insert(pair<string, string>("Fish", "Water"));

    // Size of map
    cout << "Size of unordered_map name Address is : " << Address.size() << endl;
    cout << "Maximum Size of unordered_map name Address is : " << Address.max_size() << endl;

    // print all addresses in the unordered list
    for (auto itr : Address)
    {
        cout << "Address of " << itr.first << " --->  " << itr.second << endl;
    }

    //***************************** map for decending order  *******************************
    map<int, string, greater<>> gtmap = {{1, "Ani"}, {2, "Kalu"}, {3, "valu"}}; // you have to use greater operator for decending order map
    cout << "gtmap for decending order " << endl;
    for (auto itr : gtmap)
    {
        cout << itr.first << "---> " << itr.second << endl;
    }

    //*********************************** multimap in c++   *******************************
    cout << "Multimap in c++ "<<endl;
    multimap<int,string> multmap = {{1,"Hii,"},{1,"I am"},{1,"multimap."},{2,"I can strore "} ,{2,"more than one key "},{2,"To store value"}  };

    // Print all key- values in multimap
    for(auto itr :multmap){
        cout << itr.first <<"-->"<<itr.second <<endl;
    }
    cout << "count of key-1 in multimap is " << multmap.count(1) <<endl;

    cout << "Size of multimap is " << multmap.size() <<endl;

    auto n = multmap.find(1); 
    cout << n->first << " "  << n->second ;
    // some info --> 
    // ? you can use " map<int, vector<string> >" insted of using multimap .
    // ! but you will face problems to mentain this 
    // * So you have to use multimap insted of "map<int, vector<string> >" 
    


    return 0;
}