#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    Node*  root = new Node(10);
    root->left = new Node(4);
    root->right = new Node(24);
    root->left->left = new Node(67);
    root->left->right = new Node(32);

return 0;
}