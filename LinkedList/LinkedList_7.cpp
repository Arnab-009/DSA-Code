//Insert a node at middle position in singly LinkedList

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
void insertAtMiddle(Node *&head,int data){
    Node *fast = head;
    Node *slow = head;
    Node *newNode = new Node;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    newNode->data = data;
    newNode->next = slow->next;
    slow->next = newNode;
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
    insertNode(head,2);
    insertNode(head,4);
    insertNode(head,6);
    insertNode(head,8);
    insertNode(head,3);
    display(head);
    insertAtMiddle(head,15);
    display(head);
    return 0;
}
