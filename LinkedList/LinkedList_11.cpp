//Delete middle node from singly LinkedList

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

void deleteMiddleNode(Node *&head){
    Node *fast = head;
    Node *slow = head;
    Node *ptr = new Node;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        ptr = slow;
        slow = slow->next;
    }
    ptr->next = slow->next;
    delete slow;
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
    deleteMiddleNode(head);
    display(head);
    return 0;
}
