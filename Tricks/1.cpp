/*Date - 18/12/2023 night 1:00 am - 2:40am */

#include "bits/stdc++.h"
#include <iostream>
#include <string>
using namespace std;

// for template variable ( discussion are later )
template <typename T>
T PI = T(3.14159265359L);

// for constant expression ( discussions are later )
// constexpr functions allows the compiler to perform computations at compile time
constexpr int square(int x)
{
    return x * x;
}

int main()
{
    { // ***************************** std::rotate **********************************
        /*
                 vector<int> vec{2, 3, 4, 5, 6, 7, 8};
                 int key;
                 cout << "Vec1 is :--> " << endl;
                 for (auto itr : vec)
                 {
                     cout << itr << endl;
                 }
                 cout << "Enter key (index) : " << endl;
                 cin >> key;
                 cout << "Rotate vec1 at key (index) " << key << "is : --> " << endl;
                 rotate(vec.begin(), vec.begin() + key, vec.end());
                 for (auto itr : vec)
                 {
                     cout << itr << endl;
                 }
                 */
    }

    { //****************** binary,oct,hex,dec  ***************************
        /* cout << oct << 9 << endl;
         cout << hex << 15 << endl;  //f
         cout << dec << 100 << endl;  //100
         cout <<bitset <20>(10) <<endl; //last 20 digit of binary of 10

         */
    }

    { //*************** The smallest element from three *******************
        /*  int mini = min(min(3, 4), 9); // it is too lengthy if you try for longer sequence
          cout << mini << endl;

          // or you can try this (most effectively)
          int minimum = min({10, 20, 34, 42, 52, 61});
          int maximum = max({10, 20, 34, 42, 52, 61});

          cout << "Minimum : " << minimum << endl;
          cout << "Maximum : " << maximum << endl;
          */
    }

    { //**************** __gcd *******************

        /* int GCD = __gcd(10, 20);
          cout << "GCD : " << GCD << '\n'; // 10
          */
    }

    { //***************************** tuple in c++ ********************************
      //   tuple<int,string,double,int> tp(3,"ani",4.6,9);
    }

    //!!!!!!!!!!!!!!!!!  Update in 19/12/2023 at 7:00 pm to 9:00pm  !!!!!!!!!!!!!!!

    { //********************  Digit seprator in c++14 **********************
        /*  int number = 10'00'000;                // you have to use (' sign) for seperate digits from one to another
          cout << "Number : " << number << '\n'; // 1000000
          */
    }

    { //************************  variable Template in c++14 **********************
        /*
                cout << "Integer format of PI is : " << PI<int> << '\n';
                cout << "Floting format of PI is : " << PI<float> << '\n';
                cout << "Double format of PI is : " << PI<double> << '\n';
                cout << "Long double format of PI is : " << PI<long double> << '\n';
                // initialize charecter variable to PI template variable
                PI<char> = 'A';
                cout << "Charecter format of PI after initializing PI to Charecter  : " << PI<char> << '\n';

                */
    }

    { //*****************  Generic Lambda In C++14 ******************
        /*
         auto add = [](auto a, auto b)
         { return a + b; };
         int first = 9, last = 3;
         string str1 = "Aniruddha ", str2 = "Adak ";

         cout << "Adding two integer : " << add(first, last) << '\n';
         cout << "Adding two string : " << add(str1, str2) << '\n';
         */
    }

    { //******  Constant Expression(constexpr) in c++ (see the top  for function declearation)***********
        /* int result = square(3);
         cout << "Square of 3 is : " << result << '\n';//it run only compile time
         */
    }

    //???????????????????? Update in 21/12/2023 at 9:30 to 10:00pm  ?????????????????????
    {   //**************************  String initialisation and address of string **************
        /* string s{"Aniruddha Adak"};
         string s1{s.substr(0, 4)};
         cout << s << endl;
         cout << addressof(s) << endl;
         cout << s1 << endl;
         cout << addressof(s1) << endl;
         */
    }

    { //*****************  if else Initialiser C++17 Feature  *****************
        /*
         if(int x =10 ; x == 10){
            cout <<x <<endl;
         }
         //**** It is not working bt the syntax is correct ****
        */
    }

{
 
}

}
