#include <iostream>
using namespace std;

// creating a structure
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

int main()
{

    // creating a nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // assigning data and next pointer to head
    head->data = 10;
    head->next = second;

    // assigning data and next pointer to second node
    second->data = 20;
    second->next = third;

    // assigning data and next pointer to third node
    third->data = 30;
    third->next = NULL;

    // printing the data of nodes
    printList(head);
    return 0;
}