#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

void insertAtBeginning(Node *&head, int newData)
{
    Node *newNode = new Node(newData);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int newData)
{
    Node *newNode = new Node(newData);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtanyPosition(Node* &head,int position,int newData){
    //create a new node
    Node* newNode =  new Node(newData);
    if(position ==1){
        newNode->next =  head;
        head = newNode;
        return;
    }
    Node* temp =  head;
     int len = 1;

     // traverse to the desired place
     while(temp != nullptr && len < position -1){
        temp =  temp->next;
        len++;
     }

     if(temp ==  nullptr){
        cout<<"position out of the range"<<endl;
        delete newNode;
        return;
     }
     newNode->next =  temp->next;
     temp->next =  newNode;

}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}



int main()
{

    Node* head = nullptr;
    insertAtBeginning(head,4);
    insertAtBeginning(head,5);
    printList(head);
    return 0;
}