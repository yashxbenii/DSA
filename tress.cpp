// non-linear,hierarchical data structure
//root
//  |
//edges
//  |
//node
// binary tree - a node can have at most 2 children

// 1. Breadth first search 
//- level order travesring 

// 2. Depth first search 
// -pre order traversal - root-left-right
// -in order traversal  - left-root-right
// -post order traversal- left-right-root

#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};
void preorder(TreeNode* root){
    if(root==nullptr) return;
    cout<<root->data<<" "<<endl;
    preorder(root->left);
    preorder(root->right);
 }
 void inorder(TreeNode* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" "<<endl;
    inorder(root->right);
 }
 void postorder(TreeNode* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "<<endl;
 }
 void level_order(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* top=q.front();
        q.pop();
        cout<<top->data<<" ";
        if(top->left) q.push(top->left);
        if(top->right) q.push(top->right);
    }

}
 int main(){
    
    TreeNode* t1= new TreeNode(1);
    TreeNode* t2= new TreeNode(2);
    TreeNode* t3= new TreeNode(3);
    t1->left=t2;
    t1->right=t3;
    t2->left= new TreeNode(4);
    t2->right=new TreeNode(5);
    cout<<"Level order "<<endl;
    //preorder(t1);
    level_order(t1);
    
 }
 
 