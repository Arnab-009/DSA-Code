#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};

struct Node* createNode(int data){
    Node *n = new Node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(Node *root){
    if(root != NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void inOrder(Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main(){
    Node *root = createNode(2);
    root->left = createNode(1);    
    root->right = createNode(4);
    
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    inOrder(root);
    return 0;
}