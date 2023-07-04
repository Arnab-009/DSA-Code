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
void diplay(Node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
Node *findMiddle(Node *head){
    if(head == NULL){
        return nullptr;
    }
    Node *fastptr = head;
    Node *slowptr = head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    return slowptr;
}
int main(){
    Node *head = NULL;
    insertNode(head,2);
    insertNode(head,4);
    insertNode(head,6);
    insertNode(head,8);
    insertNode(head,9);
    diplay(head);
    Node *middle = findMiddle(head);
    if(middle!=NULL){
        cout<<"Middle element is: "<<middle->data<<endl;
    }
    else{
        cout<<"Empty List!!"<<endl;
    }
    return 0;
}