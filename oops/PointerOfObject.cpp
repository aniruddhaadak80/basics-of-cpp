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
};

int main()
{
    // define an object of Phone class
    Phone obj;
    Phone *ptr_of_obj = &obj; // pointer to phone object 'obj'
    // using obj as a reference
    cout << "Phone name (using obj): " << obj.name << endl; // samsung 32px
    // using pointer as a reference
    cout << "Phone name (usibng pointer of object): " << ptr_of_obj->name << endl;       // samsung 32px //!don't use "*" sign  when access the class member
    // charger 
    cout << "Is phone charger available : " << ptr_of_obj->is_charger_available << endl; // 1

    return 0;
}