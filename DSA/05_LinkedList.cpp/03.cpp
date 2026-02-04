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

void printList(Node* head){
    Node* temp = head;
    do{ // so that temp move ahead and print at least once
        cout << temp->data << " -> ";
        temp = temp->next;
    } 
    while(temp != head);
    cout << "NULL" << endl;
}

void deletionAtEnd(Node* &head){
    Node* temp = head;
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    while(temp->next->next != head){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = head;
    delete todelete;
}

void deletionAtBeg(Node* &head){
    Node* todelete = head;
    Node* temp = head;
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    head= head->next;
    delete todelete;
}

int main(){
    Node* head = NULL;

    insertAtBeg(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    printList(head);
}