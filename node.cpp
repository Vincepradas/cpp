#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

class Node {
    public:
        int val;
        Node* prev;
        Node* next;
    public:
        Node(int val, Node* p, Node* n) {
            this->val = val;
            this->prev = p;
            this->next = n;
        }
};

void insertFront(node* &head, int data) {
    node* nn = new node{data, nullptr};
    nn->next = head;
    head = nn;
    return;
}   

void insertBack(node* &head, int data) {
    node * nn = new node{data, nullptr};
    node* tmp = head;

    while(tmp->next!=nullptr)
        tmp = tmp->next;

    nn->next = tmp->next;
    tmp->next = nn;
}   

void insert(node* &head, int data, int idx) {
    node* nn = new node{data, nullptr};

    if(idx == 1) insertFront(head, data);

    int ctr=1;
    node* tmp = head;
    while(tmp!=nullptr && ctr<idx-1) {
        tmp = tmp->next;
        ctr++;
    }

    nn->next = tmp->next;
    tmp->next = nn;
}

void del(node* &head, int idx) {
    int ctr = 1;
    node* prev = head;
    while(prev!=nullptr && ctr<idx-1) {
        ctr++;
        prev = prev->next;
    }

    node* target = prev->next;
    prev->next = target->next;
    delete target;
}

int countNodes(node* head) {
    int ctr = 0;
    while(head!=nullptr) {
        ctr++;
        head = head->next;
    }
    return ctr;
}

void print(node* head) {
    node* tmp = head;
    while(tmp!=nullptr) {
        cout<<tmp->data<<endl;
        tmp = tmp->next;
    }
}



int main() {
    Node* head = new Node(1, nullptr, nullptr);
    head->next = new Node(2, head, new Node(3, head->next, nullptr));

    cout<<head->next->next->prev->val;
} 