#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 33;
    third->next = NULL;

    linkedListTraversal(head);
    return 0;
}