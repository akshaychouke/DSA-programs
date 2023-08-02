#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};


void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

     if(*head_ref != NULL){
        (*head_ref)->prev = new_node;
     }
     *head_ref = new_node;
}


void printList(Node* node){
    Node* last;
    cout<<"Traversal in forward direction"<<endl;
    while(node != NULL){
        cout<<node->data<<" ";
        last = node;
        node = node->next;
    }
    cout<<endl;
    cout<<"Traversal in reverse direction"<<endl;
    while(last != NULL){
        cout<<last->data<<" ";
        last = last->prev;
    }
}
int main(){
    Node *head = NULL;
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);
    push(&head, 12);
    push(&head, 14);
    push(&head, 16);
    push(&head, 18);
    push(&head, 20);


    printList(head);
return 0;
}