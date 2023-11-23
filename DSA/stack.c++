#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(3);                 // 3
    st.push(4);                 // 4,3
    st.push(5);                 // 5,4,3
    st.push(6);                 // 6,5,4,3
    st.emplace(7);              //* same as push() //7,6,5,4,3
    cout << st.size() << endl;  // size of stack :------------> 5
    cout << st.top() << endl;   // top element of stack :---------------> 7
    cout << st.empty() << endl; // empty stack :--------------> 0
    st.pop();                   // remove -->7
    st.pop();                   // remove -->6
    cout << st.size() << endl;  // size of stack :------------> 3
    cout << st.top() << endl;   // top element of stack :---------------> 5
     
}