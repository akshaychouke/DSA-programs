#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    cout << "The linked list is: ";
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

// Insertion at the front of the linked list using head reference

void push(Node **head_ref, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = *head_ref;

    *head_ref = newNode;
}
int main()
{

    Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    printList(head);
    return 0;
}