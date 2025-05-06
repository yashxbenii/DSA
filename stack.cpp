#include<bits/stdc++.h>
using namespace std;

//implimentation using linked list
class Listnode{
    public:
    int data;
    Listnode* next;
    Listnode(int data){
        this->data=data;
        next=nullptr;

    }
};
class Stack{
    public:
    Listnode* head;
    int count;
    Stack(){
        head=nullptr;
        count=0;
    }
    void push(int val){
        count++;
        Listnode* node= new Listnode(val);
        node->next=head;
        head=node;  
    }
    void pop(){
        if(head==nullptr){
            cout<<"underflow"<<endl;
            return;
        }
        count--;
        Listnode* temp=head;
        head=head->next;
        delete temp;

    }
    bool isempty(){
        return count==0;
    }
    int peek(){
        if(head==nullptr){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    int size(){
        return count;

    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);

    cout<<"size"<<st.size()<<endl;


}