#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};


//to print the data of nodes
void printList(Node *node){
    cout<<"Linked List: ";
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}

void insert(Node *prev_node,int newData){
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}


int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 5;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // printing the data of nodes
    cout<<"Before Insertion: ";
    printList(head);

    //inserting the node at the middle
    insert(second,25);
    insert(third,35);
    insert(head,10);
    insert(head->next,15);
    
    //printing the data of nodes
    cout<<"\nAfter Insertion: ";
    printList(head);
    return 0;
}