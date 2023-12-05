/*
Date -->  5/12/2023 at 2:30pm to 4:00pm afternoon.
Topics :- 1.Recursion in very simple way
          2.Recursion and Iteration done in same work in different way

*/

#include <bits/stdc++.h>
using namespace std;

// recursive function to print 45 birthday to 0 day
void Birthday(int day)
{
    if (day <= 45 && day > 0)
    {
        cout << "Your Birthday is " << day << " day left" << endl;
        Birthday(day - 1);
    }
    // Base case 
    else
    {
        printf("Today is your birthday "); //* remember you can use C functions in c++
    }
}

// Recursive way of printing numbers from n to 1
void Decrease(int n)
{
    // Base case
    if (n == 0)
    {
        cout << 0 << " ";
    }
    else
    {
        cout << n << " ";
        Decrease(n - 1);
    }
}

// main function
int main()
{
    // to print 45 to 0 day of birthday
    Birthday(45);

    cout << endl;

    // Print all numbers from 30 to 0
    cout << " Decrease Numbers : ";
    Decrease(30);
}