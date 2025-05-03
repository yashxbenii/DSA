// even add 
// odd value
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
void print(Node* head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    Node* head=new Node(1);
    Node* second=new Node(3);
    head->next=second;
    Node* third=new Node(2);
    second->next=third;

    print(head);

    
}

// insert and delete in ll
begin       O(1)
miidle/end  O(n)

