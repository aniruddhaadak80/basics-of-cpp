/*
Date -> 14/12/2023
Topic : 1.Queue


*/

#include <bits/stdc++.h>
using namespace std;

// Display queue
void displayQueue(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    // Example usage
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(5);
    q1.push(3);
    cout << "Front element of q1 is : " << q1.front() << endl;
    cout << "Back element of q1 is : " << q1.back() << endl;

    cout << "All elements of q1 are : ";
    displayQueue(q1); // 1 2 5 3

    return 0;
}
