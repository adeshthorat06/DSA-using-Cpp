#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertEnd(Node*& head, int value){
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;

    }
    temp->next = newNode;
}
void deleteVal(Node*& head, int value){
    if(head == nullptr) {return;}

    if(head -> data == value){
        Node* oldhead = head;
        head = head -> next;
        delete oldhead;
        return;
    }
        Node* temp = head;

        while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;

    }
    if (temp->next != nullptr) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    }
    


    void PrintList(Node* head){
        Node* temp = head;
        while(temp != nullptr){
            cout<< temp -> data << "->";
            temp = temp -> next;
        }
        if(temp == nullptr){
            cout<<"null-Pointer";
        }
        cout<<"\n";
    }
int main(){
    Node* head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);
    insertEnd(head, 50);
    PrintList(head);
    deleteVal(head, 30);
    PrintList(head);

    
}