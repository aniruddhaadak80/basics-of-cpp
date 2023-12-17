/*
Date -> 14/12/2023
Topic : 1.Stack

*/
#include <bits/stdc++.h>
using namespace std;

void DisplayStack(auto st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

int main()
{
    // st stack
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << "Display stack st : " << endl;
    DisplayStack(st);

    cout << "Stack Size : " << st.size() << endl;

    // st1 stack
    stack<int> st1;
    st1.push(23);
    st1.push(21);
    st1.push(29);
    st1.pop();
    cout << "Display stack st1 : " << endl;
    DisplayStack(st1); // 21 23

    cout << "Top element of st1 stack is : " << st1.top() << endl; // 21
    cout << "Is stack empty? --> " << st.empty() << endl;          // 0 -->  false

    return 0;
}