//Insert a node at any index in singly LinkedList

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

void insertAtanyIndex(Node *&head,int data,int index){
    Node *newNode = new Node;
    Node *ptr = head;
    int n = 0;
    if(index==1){
        insertNode(head,data);
    }
    else{
    while(n<index-2){
        n++;
        ptr = ptr->next;
    }
    newNode->data = data;
    newNode->next = ptr->next;
    ptr->next = newNode;
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
    insertNode(head,2);
    insertNode(head,4);
    insertNode(head,6);
    insertNode(head,8);
    insertNode(head,3);
    display(head);
    insertAtanyIndex(head,11,1);
    display(head);
    insertAtanyIndex(head,233,4);
    display(head);
    return 0;
}
