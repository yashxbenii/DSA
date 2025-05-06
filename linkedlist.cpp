// even add 
// odd value

// add a new node
// ListNode* head=new ListNode(-1);
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
void print(Node* head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
Node* insertatbegin(Node* head,int data){
    Node* node=new Node(data);
    node->next=head;
    head=node;
    return head;
}
Node* insert_atend(Node *head,int data){
    Node* node=new Node(data);
    if(head==nullptr)return node;
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=node;
    return head;
}
Node* insertatmid(Node* head,Node* location,int data){
    Node* node=new Node(data);
    if(location==nullptr) return node;
    node->next=location->next;
    location->next=node;
    return head;
}
Node* dlete(Node* head,Node *to_delete){
    if(head== nullptr || to_delete==nullptr) return head;
    if(head==to_delete){
        Node* temp=head;
        delete temp;
        return head;
    }
    Node* prev=nullptr;
    Node* curr=head;
    while(curr!=to_delete){
        prev=curr;
        curr=curr->next;
    }
    prev->next =curr->next;
    delete curr;
    return head;
}
int main(){
    Node* first=new Node(1);
    Node* second=new Node(2);
    first->next=second;
    Node* third=new Node(3);
    second->next=third;
    // first =insertatbegin(first,10);
    // first=insert_atend(first,99);
    //first=insertatmid(first,second,22);
    first=dlete(first,second);
    print(first);
    
}

// insert and delete in ll
// begin       O(1)
// miidle/end  O(n)

