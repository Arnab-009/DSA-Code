//Delete first node from singly LinkedList

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void insertNode(Node *&head,int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void deleteFirstNode(Node *&head){
    Node *ptr = head;
    if(head == NULL){
        cout<<"Linked List is empty!!"<<endl;
    }
    else{
        head = head->next;
        delete ptr;
    }
}

void display(Node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
    insertNode(head,1);
    insertNode(head,3);
    insertNode(head,5);
    insertNode(head,7);
    insertNode(head,9);
    insertNode(head,11);
    insertNode(head,13);
    display(head);
    deleteFirstNode(head);
    display(head);
    return 0;
}
