#include <bits/stdc++.h>
using namespace std;

// define class of hashing
class Hashing
{
public:
    // To construct a hashtable
    vector<list<int>> Hashtable;
    int buckets;

    // constructor
    Hashing(int size)
    {
        buckets = size;
        Hashtable.resize(size);
    }

    // find the hashvalue
    int Hashvalue(int key)
    {
        return (key % buckets); //* division method
    }

    // Add elements through key
    void addkey(int key)
    {
        int idx = Hashvalue(key);
        Hashtable[idx].push_back(key);
    }

    // search for elements
    list<int>::iterator searchkey(int key)
    {
        int idx = Hashvalue(key);
        return find(Hashtable[idx].begin(), Hashtable[idx].end(), key);
    }


    // delete elements in hashtable
    void deletekey(int key)
    {
        int idx = Hashvalue(key);
        if (searchkey(key) != Hashtable[idx].end())
        {
            Hashtable[idx].erase(searchkey(key));

            cout << key << " is deleted ." << endl;
        }
        else
        {
            cout << "Key is not present in hashtable" << endl;
        }
    }

};

int main()
{
    Hashing h(5);

    // Add five elements to hashtable
    h.addkey(3);
    h.addkey(4);
    h.addkey(5);
    h.addkey(6);
    h.addkey(7);

    // delete 6 from hashtable
    h.deletekey(6); // output ----> 6 is deleted .
    h.deletekey(6); // output -----> Key is not present in hashtable .
    h.deletekey(5); // output ----> 5 is deleted .

    return 0;
}