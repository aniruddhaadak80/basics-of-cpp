/*
Date -13/12/2023 at 1:00 am to 2:00 am night 
Topics :-->
?         1.forward_list (single linked list)
*         2.list(double linked list)

*/


#include <bits/stdc++.h>
using namespace std;

void display_single_linked_list(forward_list<int> flist)
{
    for (auto itr : flist)
    {
        cout << itr << endl;
    }
}

void display_double_linked_list(auto lst) 
// you can use list<int> here insted of auto .But auto is more efficient
{
    for (auto itr : lst)
    {
        cout << itr << endl;
    }
}

int main()
{
    //****************  Single linked list or forward_list in c++ STL  *********************
    forward_list<int> flist1;

    flist1 = {2, 3, 4, 4, 3};

    cout << "Display single linked list : " << endl;
    // display all elements of flist1
    display_single_linked_list(flist1);

    // insert 9 after 2nd element in flist1
    cout << "Insert 9 after 1st element(2) in flist1 :  " << endl;

    flist1.insert_after(flist1.begin(), 9);

    display_single_linked_list(flist1);

    //******************* Double linked list or list  in c++ STL  *************************
    list<int> lst;
    list<int> lst1;
    lst = {3, 5, 8, 4, 7, 3, 3};

    lst.sort();   // 3,3,3,4,5,7,8
    lst.unique(); // 3,4,5,7,8
    cout << "unique elements in lst list after sorting : " << endl;
    display_double_linked_list(lst);

    cout << "Reverse lst list : " << endl;
    lst.reverse();
    display_double_linked_list(lst);

    cout << "Size of lst list(after sorting and removing same elements) is : " << lst.size() << endl;

    cout << "Front node data of lst list is : " << lst.front() << endl;

    cout << "Last node data of lst list is : " << lst.back() << endl;

    // merge lst and lst1 together
    lst1 = {34, 45, 56,43};
    lst.merge(lst1);
    cout << "Merge lst and lst1 : " << endl;
    display_double_linked_list(lst);
}
