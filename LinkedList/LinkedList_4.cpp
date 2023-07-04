#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void insertAtBegining(Node *&head,int data){
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
    insertAtBegining(head,1);
    insertAtBegining(head,3);
    insertAtBegining(head,5);
    insertAtBegining(head,7);
    insertAtBegining(head,9);
    insertAtBegining(head,11);
    insertAtBegining(head,13);
    display(head);
    insertAtBegining(head,0);
    display(head);
    return 0;
}