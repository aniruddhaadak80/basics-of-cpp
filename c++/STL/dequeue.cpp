/*
Date -14/12/2023
Topic: 1. Deque

*/

#include <bits/stdc++.h>
using namespace std;

// Display Dqueues
void display(auto dq)
{
    cout << "Now your Dqueue looks like : " << endl;
    for (auto itr : dq)
    {
        cout << itr << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> dq{1, 2, 3}; // Uniform initialization for Dqueues
    display(dq);            // 1 2 3

    // operations on dqueue
    dq.push_back(9);
    display(dq); // 1 2 3 9

    dq.push_front(0);
    display(dq); // 0 1 2 3 9

    dq.pop_back();
    display(dq); // 0 1 2 3

    dq.pop_front();
    display(dq); // 1 2 3

    cout << "Size of deque dq is : " << dq.size() << endl;           // 3
    cout << "Is deque dq empty? --> " << dq.empty() << endl;         // 0 -->means not empty
    cout << "Front element of deque dq is : " << dq.front() << endl; // 1
    cout << "Last element of deque dq is : " << dq.back() << endl;   // 3
}