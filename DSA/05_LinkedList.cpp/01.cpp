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


// Deletion At Last
void deletionAtEnd(Node* &head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head; // value ko delete kia..head pointer ko delete ni kia..if &head 67
        head = NULL; // head is deleted above so making it NULL to avoid dangling pointer ni toh garbage value aa jaega
        return;
    }
    Node* temp = head;
    // Node* prev = NULL;
    // while(temp->next!=NULL){
    //     prev = temp;
    //     temp = temp->next;
    // }
    // prev->next = NULL;
    // delete temp;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// Deletion at Beg
void deletionAtBeg(Node* &head){
    if (head == NULL){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deletionatpos(Node* &head, int pos){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    if(pos == 1){
        head = head->next;
        delete temp;
        return;
    }
    for(int i =0; i <pos - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        return;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}


int countEven(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data % 2 == 0){
            count ++;
        }
        temp = temp->next;
    }
    return count;
}

bool searchKey(Node* head, int key){ // by value - because just searching and not modifying
    Node* temp = head;
    if(head == NULL){
        return false;
    }
    if(head->data == key){
        return true;
    }
    return searchKey(head->next, key);
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
    insertAtEnd(head, 42);
    insertAtEnd(head, 18);
    insertAtEnd(head, 11);
    insertAtEnd(head, 17);
    insertAtBeg(head, 33);
    //insertAtPos(head, 3, 100);
    //deletionatpos(head, 3);
    //cout << countEven(head);
    //printList(head);
    cout << searchKey(head, 11);
}