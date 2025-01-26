#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

Node *AddNum(Node *head1, Node *head2)
{
    Node *temp = new Node(0);
    Node *ptr = temp;
    int carry = 0;
    while(head1 != nullptr || head2 != nullptr){
        int sum = carry;
        if(head1 != nullptr){
            sum += head1->data;
            head1 =  head1->next;
        }
          if(head2 != nullptr){
            sum += head2->data;
            head2 =  head2->next;
        }
        carry =  sum/10;
        sum =  sum%10;
        ptr->next = new Node(sum);
        ptr =  ptr->next;
    }

    if(carry>0){
        ptr->next =  new Node(carry);
    }
    return temp->next;
}

int main()
{
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    // 1--.2
    // 3--9
    Node *head2 = new Node(3);
    head2->next = new Node(9);

    Node* res = AddNum(head1, head2);
    // cout << "the resultant sum is " << res << endl; // this will give the direct address
    cout << "The resultant sum is: ";
    while (res != nullptr)
    {
        cout << res->data;
        res = res->next;
        if (res != nullptr) // To format the output with "->" between nodes
            cout << "->";
    }
    cout << endl;
    return 0;
}