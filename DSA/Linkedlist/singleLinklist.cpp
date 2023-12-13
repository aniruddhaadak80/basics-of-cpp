#include<bits/stdc++.h>
using namespace std;

// create node 
class Node{
    public:
     int data;
     Node *next;
    //  constructor
    Node(int val){
     data = val;
     next  =NULL;
    }

};

// Insert a node at the head 
void InsertAtHead(Node* &head , int val){
    Node *new_node = new Node(val);
    new_node ->next = head;
    head = new_node;

}

// Display linked list 
void Display(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout <<"NULL" <<endl;

}



int main(){
    // create a Node object using dynamic allocation
//  Node *n1 =new Node(1);
//  cout <<"Data -> "<< n1->data<<endl
//      <<"Address of next node -> " << n1->next <<endl;

Node *head = NULL;
InsertAtHead(head,2);
Display(head);
InsertAtHead(head,1);
Display(head);
InsertAtHead(head,4);
Display(head);


}