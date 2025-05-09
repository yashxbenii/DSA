//BST (Binary Search Tree)    average or best=O(log n)
//node>left
//node<right                  wrost case =O(n)
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool search(Node* root, int x) {
    // Your code here
    if(root==nullptr) return false;
    if(root->data==x) return true;
    if(x>root->data) return search(root->right,x);
    return search(root->left,x);
}
