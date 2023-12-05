/*
Date :-----> 5/12/2023 at 11:15 to 11:40am Morning
Topics :----> 1.Next permutation of vector
              2.Prev permutation of vector
              3.__builtin_popcount(n) function for counting the number of 1 in a binary form of a decimal number


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can use array also insted of vector
    vector<int> perm1 = {2, 3, 4};
    vector<int> perm2 = {9, 5, 6};

    //************************* for Next permutation of vector ******************

    next_permutation(perm1.begin(), perm1.end());

    cout << "Next permutation of perm1 is : " << perm1[0] << " " << perm1[1] << " " << perm1[2] << endl; // output ---> 2 4 3

    //************************ for prev permutation of vector  ********************

    prev_permutation(perm2.begin(), perm2.end());

    cout << "Previous permutation of perm2 is : " << perm2[0] << " " << perm2[1] << " " << perm2[2] << endl; // output --->  6 9 5


    //*******  __builtin_popcount(n) function for counting the number of 1 in a binary form of a decimal number   *************
    int num;
    cout << "Enter a number to count the number of binary 1 inside it : ";
    cin >> num;
    cout << "The number of binary 1 inside the decimal number is : " << __builtin_popcount(num) << endl;

    return 0;
}