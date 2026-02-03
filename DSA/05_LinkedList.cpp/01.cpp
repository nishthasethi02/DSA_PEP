// Singly Linked List

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){ // Parameterized Constructor - to initialize the node
        data = val;
        next = NULL;
    }
};

//  insert at end
void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if (head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

// insertAtBeg
void insertAtBeg(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
}

void insertAtPos(Node* head, int pos, int val){
    Node* node = new Node(val);

    if(pos == 1){
        node->next = head;
        head = node;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1 ; i++){
        temp = temp -> next;
    }

    if(temp == NULL){
        return;
    }

    node->next = temp->next;
    temp->next = node;
}    

void printList(Node* head){ //kiunki just printing the values and not modifying so pass by value
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    // creating object of Node class

    // Node* n1 = new Node(1);
    // Node* headptr = n1;
    // Node* n2 = new Node(2);
    // n1->next = n2;
    // cout << n1->data << endl;
    // cout << n1->next << endl; // NULL

    Node* head = NULL;
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtBeg(head, 1);
    insertAtPos(head, 3, 100);
    printList(head);
}