/*

Date - 4/12/2023
Reference : sololearn 
Topic : 1. Object pointer in c++
        2. Constant object in c++

*/

#include <bits/stdc++.h>
using namespace std;

//  Define and Declear  class Phone
class Phone
{
public:
    string name = "samsung 32px";
    string color = "Red";
    int price = 20000;
    bool is_charger_available = true;

    // constant function for constant object
    void Func() const
    { //* "const"  data type must be after "Func()" function
        cout << "I help peoples to call and connect to each other " << endl;
    }
};

int main()
{
    // define an object of Phone class
    Phone obj;
    Phone *ptr_of_obj = &obj; // pointer to phone object 'obj'
    // using obj as a reference
    cout << "Phone name (using obj): " << obj.name << endl; // samsung 32px
    // using pointer as a reference
    cout << "Phone name (usibng pointer of object): " << ptr_of_obj -> name << endl; // samsung 32px //!don't use "*" sign  when access the class member
    // charger
    cout << "Is phone charger available : " << ptr_of_obj -> is_charger_available << endl; // 1


    //***************  Call a constant function through a  constant Object  ***************
    const Phone sample_phone; // constant object
    sample_phone.Func();      // I help peoples to call and connect to each other
    return 0;
}