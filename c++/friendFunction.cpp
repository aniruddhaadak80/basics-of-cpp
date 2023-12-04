#include <bits/stdc++.h>
using namespace std;

// class Declearation
class Home
{
private:
    int id = 1;

protected:
    string name = "Aniruddha";

public:
    int favNum = 9;               // favouritre number
    void NoramlFunction();        // Normal function
    friend void friendFunction(); // decleration of friend function
};

// Description of friend function outside the class Home without Space resolution operator (::)
void friendFunction()
{
    // object for friend function .It is only accessable inside friend functon...
    Home obj; // you can not create an object inside the  main function for a  friend function

    cout << "I am Friend Functon in C++ :-------------------->" << endl;
    // for privae data  member
    cout << "I can access private data (like ID  ) :--> " << obj.id << endl; // 1
    // for protected data member
    cout << "I can also access protected data (like name  ) :--> " << obj.name << endl; // 9

    // for public data member
    cout << "I can obviously access public data (like favNum  ) :--> " << obj.favNum << endl; // 1
}

// Access and give description to the noraml function outside the class 
void Home :: NoramlFunction()
{
    cout << "I am Normal Function :-------------------------> " << endl;

    // for private data member
    cout << "I can access private data (like ID  ) :--> " << id << endl; // 1
    // for protected data member
    cout << "I can also access protected data (like name  ) :--> " << name << endl; // 9
    // for public data member
    cout << "I can obviously access public data (like favNum  ) :--> " << favNum << endl; // 1
}

// start of main function
int main()
{

    friendFunction(); // call the friendFunction

    /*you cn not call
 normal function like :--->
    NoramlFunction();
    */

    Home normal;
    normal.NoramlFunction(); // call normal function
    normal.favNum;           //* you can access public member through objct but can not access private and protected members
}
