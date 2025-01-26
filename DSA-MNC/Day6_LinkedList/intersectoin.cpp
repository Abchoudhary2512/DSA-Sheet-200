#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *intersectionNode(Node *head1, Node *head2)
{
    int len1 = length(head1);
    int len2 = length(head2);

    while (len1 > len2)
    {
        len1--;
        head1 = head1->next;
    }
    while (len2 > len1)
    {
        len2--;
        head2 = head2->next;
    }
    while (head1 != head2)
    {
        head1 = head1->next;
        head2 = head2->next;
    }

    return head1;
}

void printNode(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

int main()
{
    Node *common = new Node(13);
    common->next = new Node(16);

    Node *head1 = new Node(12);
    head1->next = common;

    Node *head2 = new Node(17);
    head2->next = common;

    Node *ans = intersectionNode(head1, head2);
    cout << "The intersection point is: ";
    printNode(ans);

    return 0;
}