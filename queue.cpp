#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
    Node* tail;
    Node* head;
    int count;

public:
    Queue() {
        tail = nullptr;
        head = nullptr;
        count = 0;
    }

    void enqueue(int data) {
        count++;
        Node* node = new Node(data);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    void dequeue() {
        if (head == nullptr) {
            cout << "underflow" << endl;
            return;
        }
        count--;
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr) { // Queue became empty, so reset tail
            tail = nullptr;
        }
    }

    int front() {
        if (head == nullptr) {
            cout << "queue is empty" << endl;
            return -1;
        }
        return head->data;
    }

    bool isempty() {
        return count == 0;
    }

    int size() {
        return count;
    }
};
int main(){
    Queue q1;
    q1.enqueue(8);
    q1.enqueue(9);

    cout<<q1.size()<<endl;


}
