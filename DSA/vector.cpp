#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
  

cout<< "Size of vector before inialization : " << v.size() << endl; // output : 0

    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);

    cout << "Now size : " <<v.size() << endl; // Now output :5

cout<<"Display of vector : "<<endl; // Display the vector 
// display the vector
for ( int i = 0; i < v.size(); i++)
{
    /* code */
    cout<<v[i]<<endl;
}

    return 0;
}