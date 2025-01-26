#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

bool detectCycle(Node *head)
{
    Node *temp = head;
    if (!head || !head->next)
        return false;
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *head = new Node(12);
    head->next = new Node(13);
    head->next->next = new Node(15);
    head->next->next->next = head->next;
    // 12 - 13-15 -->13
    bool ans = detectCycle(head);
    if (ans)
    {
        cout << "yes the cycle is detected" << endl;
    }
    else
    {
        cout << "no cycle found in the linked list" << endl;
    }
    return 0;
}