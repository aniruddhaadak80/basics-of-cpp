/*
Date -->  6/12/2023 at 2:30pm to 3:30 pm afternoon.
Topics :- 1.Print 1 to n  using recursion
          2.print all even numberts from start to end using recursion
*/

#include <bits/stdc++.h>
using namespace std;

//*************  Print 1 to n  using recursion  *****************
void Increase(int start, int end)
{
  // Base condition for increnment of numbers in recursive way
  if (start <= end)
  {
    cout << start << " ";
    Increase(start + 1, end);
  }
}

//************** print all even numberts from 1 to n using recursion **************
void EvenNum(int num_start, int num_end)
{
  // base case
  if (num_start > num_end)
  {
    return;
  }

  else if (num_start % 2 == 0)
  {
    cout << num_start << " ";
  }
  EvenNum(num_start + 1, num_end);
}

int main()
{
  //************** for increasing all numbers from start to end   ****************
  int start, end;
  cout << "Enter starting point of integer  : ";

  cin >> start;
  cout << "Enter ending point of integer  : ";
  cin >> end;

  Increase(start, end);

  cout << endl;

  //******************   for  even number  printing  ************************
  int num_start, num_end;
  cout << "Starting Number for printing all even number  : "
       << " ";
  cin >> num_start;
  cout << "Ending Number for all even number   : "
       << " ";
  cin >> num_end;
  // call recursive function
  EvenNum(num_start, num_end);
}