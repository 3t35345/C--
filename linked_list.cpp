#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class LinkedList{
    public:
        Node* head;

};

void InsertAtTheFront(Node** head, int data){
    // create a new node
    Node* new_node = new Node();
    // put the node at the front of the list
    new_node->data = data;
    new_node->next = *head;
    // update the head to this new node
    *head = new_node;
}

void InsertAtTheEnd(Node** head, int data){
    // create a new node
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    // if the list is empty, make the new node the head
    if(*head == NULL){
        *head = new_node;
        return;
    }
    // traverse to the end of the list
    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    // update the last node to point to the new node
    temp->next = new_node;
}

void insertAfter(Node* previous, int data){
    // check whether the previous node is NULL
    if(previous == NULL){
        cout << "The previous node cannot be NULL";
        return;
    }
    // create a new node
    Node* new_node = new Node();
    new_node->data = data;

    // update the new node to point to the next node
    new_node->next = previous->next;
    previous->next = new_node;
}

void print_List(Node* n){
    Node* temp = n;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main(){
    Node* head = new Node();
    Node* Second = new Node();
    Node* Third = new Node();


    head->data = 1;
    head->next = Second;

    Second->data = 2;
    Second->next = Third;

    Third->data = 3;
    Third->next = NULL;

    InsertAtTheFront(&head, -1);
    print_List(head);
    cout << endl;
    InsertAtTheEnd(&head, 4);
    print_List(head);
    cout << endl;
    insertAfter(Second, -2235);
    print_List(head);
    return 0; 
}