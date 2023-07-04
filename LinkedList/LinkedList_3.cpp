//display total number nodes from a singly LinkedList

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
void countNode(Node *head){
    int count = 0;
    Node *p = head;
    while(p != NULL){
        count++;
        p = p->next;
    }
    cout<<"Number of Nodes: "<<count<<endl;
}
int main(){
    Node *head = NULL;
    Insert(head,1);
    Insert(head,3);
    Insert(head,5);
    Insert(head,7);
    Insert(head,9);
    Insert(head,11);
    Insert(head,13);
    display(head);
    countNode(head);
    return 0;
}
