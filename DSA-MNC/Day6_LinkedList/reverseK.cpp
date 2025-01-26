#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

// Function to reverse K groups
Node* reverseKGroup(Node* head, int k) {
    if (!head) return head;

    Node* curr = head;
    Node* newHead = nullptr;
    Node* tail = nullptr;

    while (curr) {
        Node* groupHead = curr;
        Node* prev = nullptr;
        Node* nextNode = nullptr;
        int count = 0;

        // Reverse the current group of k nodes
        while (curr && count < k) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            count++;
        }

        // Set new head for the first group
        if (!newHead) newHead = prev;

        // Connect the previous group's tail to the current reversed group
        if (tail) tail->next = prev;

        // Move tail to the end of the current group
        tail = groupHead;
    }

    return newHead;
}

// Function to print the linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Reverse in groups of 3
    head = reverseKGroup(head, 3);

    // Print the reversed list
    printList(head);

    return 0;
}
