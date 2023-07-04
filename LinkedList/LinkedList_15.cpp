#include <iostream>
using namespace std;
struct Node
{
    string data;
    Node *prev;
    Node *next;
};
void insertAtEnd(Node *&head, string data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        newNode->prev = nullptr;
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}
void displayForward(Node *head)
{
    cout << "Traversal in Forward direction: " << endl;
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void displayReverse(Node *head)
{
    cout << "Traversal in Reverse direction: " << endl;
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = nullptr;
    insertAtEnd(head, "Orange");
    insertAtEnd(head, "White");
    insertAtEnd(head, "Green");
    insertAtEnd(head, "Red");
    displayForward(head);
    displayReverse(head);
    return 0;
}