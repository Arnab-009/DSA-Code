//display a node by it's index from singly LinkedList

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

void display(Node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

void displayIndex(Node *head,int index){
    int n = 0;
    while(n!=index-1){
        n++;
        head = head->next;
    }
    cout<<"The element of index "<<index<<" is: "<<head->data<<endl;
}
int main(){
    Node *head = NULL;
    insertNode(head,2);
    insertNode(head,4);
    insertNode(head,6);
    insertNode(head,8);
    insertNode(head,3);
    display(head);
    displayIndex(head,3);
    return 0;
}
