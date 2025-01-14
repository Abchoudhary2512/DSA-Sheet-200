// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x) : data(x), next(nullptr) {}
// };

// Node *middle(Node *head)
// {
//     Node *temp = head;
//     int len = 0;
//     while (temp->next != nullptr)
//     {
//         len++;
//         temp = temp->next;
//     }
//     int mid = 0;
//     if (len % 2 == 0)
//     {
//         mid = len / 2 + 2;
//     }
//     else
//     {
//         mid = len / 2 + 1;
//     }
//     Node *nextone = head;
//     while (mid > 0)
//     {
//         mid--;
//         nextone = nextone->next;
//     }
//     return nextone;
// }

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp->next != nullptr)
//     {
//         cout << temp->data << "-->";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = new Node(12);
//     head->next = new Node(13);
//     head->next->next = new Node(14);
//     head->next->next->next = new Node(15);
//     head->next->next->next->next = new Node(16);

//     Node* ans = middle(head);
//     print(ans);
//     return 0;

//     // 12--13--14---15
//     //  head ->next =  new Node(13);/
// }



#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

// Function to find the middle of the linked list
Node *middle(Node *head)
{
    if (!head) return nullptr; // Handle empty list case

    Node *slow = head;
    Node *fast = head;

    // Move 'fast' by 2 steps and 'slow' by 1 step
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; // 'slow' now points to the middle node
}

// Function to print the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr) // Traverse till the end
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Indicate the end of the list
}

int main()
{
    Node *head = new Node(12);
    head->next = new Node(13);
    head->next->next = new Node(14);
    head->next->next->next = new Node(15);
    head->next->next->next->next = new Node(16);

    // Find the middle node
    Node *ans = middle(head);

    // Print the list starting from the middle node
    print(ans);

    return 0;
}
