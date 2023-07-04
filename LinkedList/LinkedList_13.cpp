//Delete any node by the index from singly LinkedList

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void insert(Node *&head, int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void deleteAtany(Node *&head,int index){
    Node *del = head;
    Node *del1 = head->next;
    if(index == 1){
        head = head->next;
        delete del;
    }
    for(int i = 0; i<index-2; i++){
        del = del->next;
        del1 = del1->next;
    }
    del->next = del1->next;
    delete del1;
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
    insert(head,1);
    insert(head,3);
    insert(head,5);
    insert(head,7);
    display(head);
    deleteAtany(head,3);
    display(head);
    return 0;
}
