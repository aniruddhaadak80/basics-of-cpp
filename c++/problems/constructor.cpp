#include <iostream>

using namespace std;

class MyClass {
public:
  MyClass() {
    cout << "MyClass constructor" << endl;
  }

  ~MyClass() {
    cout << "MyClass destructor" << endl;
  }
};

int main() {
  MyClass* myClassPointer = new MyClass();

  // Use the pointer to access the object's members
 

  // Delete the object when we're done with it
  delete myClassPointer;

  return 0;
}