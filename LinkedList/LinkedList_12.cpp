#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void insert(Node *&head,int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void deleteLastNode(Node *head){
    if(head == nullptr || head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node *del = head;
    while(del->next->next != nullptr){
        del = del->next;
    }
    delete del->next;
    del->next = nullptr;
}
void display(Node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    insert(head,1);
    insert(head,3);
    insert(head,5);
    insert(head,7);
    display(head);
    deleteLastNode(head);
    display(head);
    deleteLastNode(head);
    display(head);
    return 0;
}