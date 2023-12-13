/*
  Date ---> 7/12/2023 at night 3:00 am
  Topic :---- > 1.Pair
                2.Double pair

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

  // simple pair
  pair<int, int> p1{9, 3};

  // display pair p1
  cout << p1.first << " " << p1.second << endl;

  // double pair
  pair<pair<int, int>, pair<int, int>> pair1{{1, 2}, {3, 4}}; // double pair

  // display double pair
  cout << pair1.first.first << "  " << pair1.first.second << " " << pair1.second.first << " " << pair1.second.second << endl;

  return 0;
}
