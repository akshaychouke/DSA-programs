#include <iostream>
// #include<container>
#include <queue>
using namespace std;

class MyStack
{
public:
    queue<int> q1, q2;

    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        q1.pop();
    }

    int top()
    {
        if (isEmpty())
            return -1;
        return q1.front();
    }

    bool isEmpty()
    {
        if (q1.size() == 0)
        {
            return true;
        }
        return false;
    }
};

main()
{
    MyStack s = MyStack();
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.top() << endl;

    s.push(1);
    s.push(2);
    cout << s.top() << endl;

    return 0;
}