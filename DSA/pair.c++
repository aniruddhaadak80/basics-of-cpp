#include <bits/stdc++.h>
using namespace std;

int main()
{
    // simple pair  generation
    pair<int, int> P = {3, 4};
    cout << "First pair: \n"
         << P.first << endl
         << "Second pair: \n"
         << P.second << endl;

    // Nested pair generation
    pair<int, pair<int, int>> NP = {1, {3, 5}};
    cout << "First pair: " << NP.first << endl
         << "First pair of Second pair : " << NP.second.first << endl
         << "second pair of Second pair : " << NP.second.second << endl;

    //  auto keyword in c++ ------------------> it will automatically generate the type of variable you use
    auto place = "Kalkata";
    cout << "I live in : " << place << endl;
 


}