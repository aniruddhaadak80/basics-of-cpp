#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Initialize all variables
  int basic;
  double totalSalary, hra, da, pf ,allow;
  char grade;

  // user input
  cin >> basic;
  cin >> grade;

  // According to problem statement
  hra =  basic * 0.20;
  da = basic * 0.50;
  pf = basic * 0.11;

  if (grade == 'A') {
    allow = 1700;
  }

  else if (grade == 'B') {
   allow =  1500;
  }

  else {
    allow = 1300;
  }

  totalSalary = basic + hra + da + allow - pf;

//  finally round totalSalary
  int finalSalary = round(totalSalary);
  cout << finalSalary << endl;

  return 0;
}