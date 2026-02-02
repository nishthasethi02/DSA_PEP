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


int main(){
    // creating object of Node class

    // Node* n1 = new Node(1);
    // Node* headptr = n1;
    // Node* n2 = new Node(2);
    // n1->next = n2;
    // cout << n1->data << endl;
    // cout << n1->next << endl; // NULL

    Node* head = NULL;
    insertAtEnd(head, 1);
}