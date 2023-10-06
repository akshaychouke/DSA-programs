#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }

    // to get size of stack
    int getSize()
    {
        int n = 0;
        Node *temp = head;

        while (temp != NULL)
        {
            n++;
            temp = temp->next;
        }

        return n;
    }

    // to check if stack is empty
    bool isEmpty()
    {
        return head == NULL;
    }
    // to push an element in stack
    void push(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    // to pop an element from stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // to get top element of stack
    int getTop()
    {
        if (isEmpty())
            return -1;
        else
            return head->data;
    }
};

int main()
{
    Stack st = Stack();

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Top element is: " << st.getTop() << endl;
    cout << "Size of stack is: " << st.getSize() << endl;

    st.pop();
    st.pop();

    cout << "Top element is: " << st.getTop() << endl;
    cout << "Size of stack is: " << st.getSize() << endl;
    return 0;
}