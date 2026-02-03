// Doubly Linked List

#include <iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Insertion at End
void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}


// Insertion at Beginning
void insertAtBeg(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        return;
    }
    node->next = head;
    head->prev = node;
    head = node;
}


// Insertion at Position
void insertAtPosition(Node* head, int pos, int val){
    Node* node = new Node(val);
    if(pos == 1){
        node->next = head;
        head->prev = node;
        head = node;
        return;
    }
    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - i++){
        temp = temp->next;
    }
    node->next = temp->next;
    node->prev =temp;
    temp->next = node;
    temp->next->prev = node;
}

// Print List
void printList(Node* head){ 
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL; //Not writing NULL lead to error because garbage value may point to some random memory location
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtBeg(head, 10);
    printList(head);
}