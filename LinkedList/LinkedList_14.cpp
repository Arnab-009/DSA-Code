#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void insert(Node **head,int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
Node* findMiddle(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node* findKthNode(Node *head, int k){
    Node *middle = findMiddle(head);
    Node *ptr = middle;
    int count = 0;
    while(ptr != nullptr && count<k){
        ptr = ptr->next;
        count++;
    }
    return ptr;
}
void display(Node *head){
    while(head != nullptr){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node *head = nullptr;
    insert(&head,1);
    insert(&head,3);
    insert(&head,5);
    insert(&head,7);
    insert(&head,9);
    display(head);
    
    int position = 2;
    Node *k = findKthNode(head,position);

    if(k != nullptr){
        cout<<"Value of position "<<position<<" is "<<k->data<<endl;
    }
    else{
        cout<<"Invalid value!!"<<endl;
    }

    return 0;
}