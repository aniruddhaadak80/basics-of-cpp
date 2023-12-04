/*Date ---> 3 /12/2023

 Learning : ->

 1. Lambda function *** Syntax -> [](data_type  para1,data_type  para2){return operation;}
 2. any_of() function
 3. all_of() function
 4. none_of() function

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //*********************** direct access to lambda function and output it ***********************
    cout << [](int x, int y)
    { return x + y; }(4, 5)
         << endl;

    //*******************   You can use according  to the following **************************
    int LambdaFunc = [](int a, int b)
    { return a * b; }(3, 4);
    cout << LambdaFunc << endl;

    //*********************   OR you can write like this  ********************************
    auto operation = [](int p, int q)
    { return (2 * p + 3 * q); };
    cout << operation(5, 6) << endl; //28

    //! Using "all_of()"  function to verify the positive number exists or not in the vector
    vector<int> v = {1, -2, 3, 4, 5};
    cout << "Are all numbers within vector(v) are positive ? :---->  " << all_of(v.begin(), v.end(), [](int x)
                                                                                 { return (x > 0); })
         << endl; // --->0  //*as at least one is negative so it returns 0
    //  you can think "all_of" function as "and "operator i.e " all_of() --> and operator"


    //? Using "any_of()"  function to verify the positive number exists or not in the vector
    cout << "Are any number within vector(v) are positive ? :---->  " << any_of(v.begin(), v.end(), [](int x)
                                                                                { return (x > 0); })
         << endl; // --->1 ; as  all are positive except --> -2.


    //* Using "none_of()"  function to verify the positive number exists or not in the vector
    cout << "None of the number within vector(v) are positive ? :---->  " << none_of(v.begin(), v.end(), [](int x)
                                                                                     { return (x > 0); })
         << endl; // --->0 ; as there are all positive except --> -2.

    return 0;
}