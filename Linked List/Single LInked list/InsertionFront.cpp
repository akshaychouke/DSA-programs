#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n){
    cout<<"The linked list is: ";
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

//to insert a node at the front of the linked list
Node* push(Node *head,int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;

    head = newNode; //head now points to the new node
    return head;
}

int main(){
    Node *head = NULL;

    //Inserting in front
    head = push(head,1);
    head = push(head,2);
    head = push(head,3);
    head = push(head,4);

    printList(head);
return 0;
}