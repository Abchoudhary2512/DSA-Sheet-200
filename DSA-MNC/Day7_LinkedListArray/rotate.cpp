#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x) : data(x), next(nullptr) {}
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int lengthList(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *rotatebyk(Node *head, int k)
{
    int len = lengthList(head);
    // cout << "the length is " << len << endl;
    //  int len = 0;
    k = k % len;
    int step = len - k - 1;
    Node *temp = head;
    while (step > 0)
    {
        temp = temp->next;
        step--;
    }
    Node *newHead = temp->next;
    temp->next = nullptr;
    Node *end = newHead;
    while (end->next != nullptr)
    {
        end = end->next;
    }
    end->next = head;
    return newHead;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int k = 3;
    Node *ans = rotatebyk(head, k);
    cout << "the rotated list is " << endl;
    printList(ans);
    return 0;
}