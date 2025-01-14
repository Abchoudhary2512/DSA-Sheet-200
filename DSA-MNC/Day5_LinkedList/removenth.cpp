
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};


Node* removeNth(Node* head,int n){
    Node* temp = new Node(0);
        temp->next = head;
        Node* first = temp;
        Node* second = temp;
        for(int i = 0;i<=n;++i){
            first = first ->next;
        }

        while(first != nullptr){
            first = first->next;

            second = second->next;
        }
        second->next = second->next->next;
        return temp->next;
    

}

void printList(Node* head){
    Node* temp  = head;
   while (temp != nullptr) {
    cout << temp->data << "--->";
    temp = temp->next;
}
cout << "NULL";
}

int main(){
        Node* head =  new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);
        head->next->next->next = new Node(4);
        // 1--2--3--4--x after removal it is 1--2--4--x;
        int n = 2;
        Node* ans =  removeNth(head,n);
        printList(ans);
        



    return 0;
}