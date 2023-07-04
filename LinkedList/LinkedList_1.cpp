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
int main(){
    Node *head = NULL;
    Insert(head,1);
    Insert(head,3);
    Insert(head,5);
    Insert(head,7);
    Insert(head,9);
    Insert(head,11);
    display(head);

    return 0;
}