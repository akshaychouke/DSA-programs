#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *node)
{
    cout << "Linked List: ";
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

void insertEnd(Node *head, int data)
{

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    while (head->next != NULL)
    {
        head = head->next;
    }

    head->next = newNode;
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

    cout << "Before Insertion: " << endl;
    printList(head);

    insertEnd(head, 40);

    cout << "\nAfter Insertion: " << endl;
    printList(head);

    return 0;
}