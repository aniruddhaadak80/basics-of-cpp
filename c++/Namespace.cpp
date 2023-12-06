
/*
Date --->  6/12/2023 at 7:10pm to 8:00 pm evening.
Topics :- 1. First namespace and first nested namespace .
          2. Second nested namespace .
          3. Output function without namespace .
          4. Directive (like :- using)
 
*/

#include <bits/stdc++.h>
using namespace std;

// First namespace and first nested namespace
namespace first
{
    void output()
    {
        cout << "I am from first namespace" << endl;
    }

    // nested  namespace of the first namespace
    namespace first_nested
    {
        void output()
        {
            cout << "I am from first nested  namespace" << endl;
        }

    }
} // end of first namespace

// Second  namespace
namespace second
{
    void output()
    {
        cout << "I am from second  namespace" << endl;
    }

};

namespace third
{
    void output()
    {
        cout << "I am from third namespace" << endl;
    }

};

// output function without namespace
void output()
{
    cout << "I am a function not from namespace " << endl;
}

int main()
{
    // from first namespace
    first::output();

    // from first nested namespace
    first::first_nested::output(); //? notice that two scope resolution operator here

    // from second namespace
    second::output();

    // from third namespace
    third ::output();
    //! you can add S MANY namespaces as you want with just different namespace name

    // from function outside  namespace
    output();
}

/* keep in mind that :--->1. using ----> Directive .
                          2. std , first ,second ,third  ----> namespace .
                          3. Use namespace carefully otherwise you will get Naming conflicts .

*/
