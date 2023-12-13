/*
*  Date --> 7/12/2023 at 7:30 to 9:00pm
?  Topics :===> 1.Normal pointer
?               2.Smart pointer
!                  i) unique_ptr
!                  ii)shared_ptr (8/12/2023)
!                  iii)weak_ptr(8/12/2023)
?                3.nullptr

*/

#include <bits/stdc++.h>
using namespace std;

// Test Class for all type of tesing of pointers
class Test
{
public:
    Test() { cout << "Constructor called" << endl; } // constructor called when object is created (statically or dynamically)
    ~Test() { cout << "Destructor called" << endl; } // destructor decleared when object is destroyed
    // Method of Test class
    void TestFunc()
    {
        cout << "I am Test function " << endl;
    }
    string name = "Aniruddha Adak";
    int ID = 100;
};

// Normal Pointer decleared
void normal_ptr()
{
    Test *test = new Test; // pointer to Test class
    test->TestFunc();      // pointer to TestFunc()
    delete test;           // delete test pointer
}

// unique pointer defined
void unique_pointer()
{
    // unique_ptr<Test> test = make_unique<Test>(); //? Decleared test pointer for Test class
    unique_ptr<Test> test(new Test); //?Another way to Declear the test pointer for Test class (best way)
    test->TestFunc();                // Access TestFunc() throught test pointer(unique pointer)
}

// shared pointer defined
void shared_pointer()
{
    shared_ptr<Test> t1(new Test);                                            // new shared pointer for Test class
    shared_ptr<Test> t2 = t1;                                                 // copy or share ownership of t1 to t2 (They both points to the same memory location ,here Test)
    cout << "Name (according to t1 ) : " << t1->name << endl;                 // Aniruddha Adak
    cout << "Name (according to t2 ) : " << t2->name << endl;                 // Aniruddha Adak
    cout << "Number of shared pointer i.e copy : " << t1.use_count() << endl; // 2
}

// weak pointer defined . Some problem occour to define a weak pointer
/*
void weak_pointer()
 {
    shared_ptr<Test> SW1(new Test); // SW ---> shared weak ( just for understanding purpose )
    weak_ptr<Test> SW2 = SW1;

    cout << SW1 -> ID << endl; //
    cout << SW2 ->ID << endl; //
    cout <<SW1.use_count() << endl;


}
*/

// null pointer
void null_pointer(int *ptr)
{
    if (ptr == nullptr)
    {
        cout << "Null pointer received" << endl;
    }

    else
    {
        cout << "Valid pointer received" << endl;
    }
}

int main()
{
    //**************************** 1) Normal pointer ************************************
    // normal_ptr(); //!  Call normal pointer . Uncomment to see the result for normal pointer .And comment the unique pointer to better understanding of the output

    //**************************** 2) Unique pointer ************************************
    // unique_pointer(); // Automatically delete memory allocated space .To see how it works comment out this

    //**************************** 3)Shared  pointer ************************************
    // shared_pointer(); // Share the ownership (in equal way)  of a  particular memory location

    //**************************** 4) Weak pointer ************************************
    // weak_pointer();  //It is not working .Some problem occours

    //**************************** 5)null pointer ************************************
    // int *ptr1 = new int; // valid pointer
    // int *ptr2 = nullptr; //?  you can write NULL or 0 here insted nullptr but it is most preferable to use nullptr

    // null_pointer(ptr1); //Valid pointer received
    // null_pointer(ptr2); //Null pointer received

    // delete ptr1; // delete pointer ptr1

    return 0;
}