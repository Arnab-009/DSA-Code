#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void Insert(Node *&head,int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void display(Node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
void reverseDisplay(Node *head){
    if(head == NULL){
        return;
    }
    reverseDisplay(head->next);
    cout<<head->data<<"->";
}
int main(){
    Node *head = NULL;
    Insert(head,1);
    Insert(head,3);
    Insert(head,5);
    Insert(head,7);
    Insert(head,9);
    Insert(head,11);
    display(head);
    reverseDisplay(head);
    return 0;
}