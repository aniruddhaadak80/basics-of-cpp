#include <bits/stdc++.h>
using namespace std;

// Base class
class Base
{
public:
  // Method overloading
  void func()
  {
    cout << "I am a function from base class " << endl;
  }

  void func(int n)
  {
    cout << "MY age  is : " << n << endl;
  }
};

// Derived class from Base class
class Derived : public Base
{
public:
  // overriding base class method func() to derived class
  void func()
  {
    cout << "I am a function from derived class " << endl;
  }

  using Base ::func; // to make visible same method name in derived class after overrding method from base class
};

int main()
{

  // Base base;
  // base.func();
  // base.func(18);

  Derived derived;
  derived.func();
  derived.func(18);
}