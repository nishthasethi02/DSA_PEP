// Singly Circular Linked List

#include <iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL; // - abhi koi head ni h.. not initialised yet..na hi node h jb hoga tb will point to the head
    }
};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next = node;
    node->next = head;
}

void insertAtBeg(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
    head = node;
}