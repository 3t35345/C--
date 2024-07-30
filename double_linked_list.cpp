#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* previous;
};

void Print_Forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void Print_Backward(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->previous;
    }
}

void InsertAtHead(Node** head, int data){
    // create a new node
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head;
    new_node->previous = NULL;

    //update the tail to point to the new node
    (*head)->previous = new_node;

    // update the head to point to the new node
    *head = new_node;
}

void insertAtTail(Node** tail, int data){
    // create a new node
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    new_node->previous = *tail;

    //update the tail to point to the new node
    (*tail)->next = new_node;

    // update the tail to point to the new node
    *tail = new_node;
}

int main(){
    Node* head;
    Node* tail;

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    first->data = 1;
    first->next = second;
    first->previous = NULL;

    second->data = 2;
    second->next = third;
    second->previous = first;

    third->data = 3;
    third->next = fourth;
    third->previous = second;

    fourth->data = 4;
    fourth->next = NULL;
    fourth->previous = third;

    head = first;
    tail = fourth;

    InsertAtHead(&head, -10);
    Print_Forward(head);
    cout << endl;
    insertAtTail(&tail, 10);
    Print_Backward(tail);

    delete first;
    delete second;
    delete third;
    delete fourth;
    return 0;
}