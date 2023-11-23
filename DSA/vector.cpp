#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
  

    cout << v.size() << endl; // output : 0

    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);

    cout <<v.size() << endl; // Now output :5

    return 0;
}