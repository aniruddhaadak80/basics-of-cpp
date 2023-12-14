/*
Date - 14/12/2023
Topic - 1. Simple pair
        2.Nested pair 
        3.vector pair

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    //*************************************** simple pair  generation  ***********************
    pair<int, int> P(3, 4);
    pair<int, int> P1{3, 4};
    pair<int, int> P2 = {3, 4};

    cout << "First element in P pair is : "
         << P.first << endl
         << "Second element in P pair is : "
         << P.second << endl;

    //***************************** Nested pair generation  *****************************
    pair<int, pair<int, int>> NP = {1, {3, 5}};
    cout << "First element in NP pair is : " << NP.first << endl
         << "Second-First element in NP pair is : " << NP.second.first << endl
         << "Second-second element in NP pair is : " << NP.second.second << endl;

    //****************************** Vector pair   ******************************
    cout << "Pair using Vector : " << endl;

    vector<pair<int, string>> vpair;

    vpair.push_back(make_pair(2, "Rohit"));
    vpair.push_back(make_pair(3, "Ramu"));
    vpair.push_back(pair<int, string>(4, "Litush"));

    // display the vpair vector pair
    for (auto itr : vpair)
    {
        cout << itr.first << " " << itr.second << endl;
    }
    

    //  auto keyword in c++ ---------> it will automatically generate the type of variable you use
    auto place = "Kalkata";
    cout << "I live in : " << place << endl;
}