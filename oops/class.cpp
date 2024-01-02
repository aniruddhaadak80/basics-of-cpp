/*Date ---> 2/1/2024 at 8:10 pm */

#include <bits/stdc++.h>
using namespace std;

// Simple class
class Simple
{
public:
    int i;
    char c;
    char c1;
    float f;
};

int main()
{
    /* Explanation :-> 
    * It uses padding in operating system .
    It stores data like -
     i i i i c c p p f f f f
*where i-> integer
    *  c-> charecter
     * p -> padding /gap/none
     * f -> floating point number
    */
    Simple s1;                  // static object declearation
    cout << sizeof(s1) << endl; // size of s1 object

    //**************** Dynamic memory allocation in class  **************
    Simple *sa1 = new Simple;
    (*sa1).c = 'A'; // store data through * (asterisk ) operator
    (*sa1).c1 = 'B';
    sa1->i = 18; // you can store data through -> (arrow ) operator
    sa1->f = 12.23;
    // Output data through both '* 'and '-> 'operator
    cout << sa1->i << " " << sa1->f << " " << (*sa1).c << " " << (*sa1).c1 << endl;

    return 0;
}
