#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
class my{
vector<int> topView(Node *root) {
    // code here
    if(root==nullptr) return{};
    vector<int>ans;
    map<int,Node*>mp;
    queue<pair<Node*,int>>q;
    
    q.push({root,0});
    while(!q.empty()){
        Node* top=q.front().first;
        int vl=q.front().second;
        q.pop();
        if(mp.find(vl)==mp.end()){
            mp[vl]=top;
        }
        if(top->left!=nullptr) q.push({top->left,vl-1});
        if(top->right!=nullptr) q.push({top->right,vl+1});
         
        
    }
    for(auto it:mp){
        ans.push_back(it.second->data);
    }
    return ans;
}
};