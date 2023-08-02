#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // Constructor to initialize the stack with size and top
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push function to push the element in the stack
    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }

    // Pop function to pop the element from the stack
    void pop()
    {

        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    // top function to return the top element of the stack
    int peak()
    {
        if (isEmpty())
            cout << "Stack is empty" << endl;
        return arr[top];
    }

    // isEmpty function to check if the stack is empty or not
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    // isFull function to check if the stack is full or not 
    //you can also use if(top == size - 1) return true; else return false;
    bool isFull()
    {
        if (size - top > 1)
            return false;
        else
            return true;
    }
};

int main()
{
    Stack st = Stack(5);

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;
    return 0;
}