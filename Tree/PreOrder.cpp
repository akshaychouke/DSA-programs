#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(4);
    root->right = new Node(24);
    root->left->left = new Node(67);
    root->left->right = new Node(32);

    cout << "The Post Order Traversal of the Tree is" << endl;
    preOrder(root);
    return 0;
}