#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *sortedInsert(struct Node *head, int data)
{
    Node *temp = new Node(data);
    if (data <= head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->data <= data && curr->next->data >= data)
        {
            Node *t = curr->next;
            curr->next = temp;
            temp->next = t;
            return head;
        }
        curr = curr->next;
    }
    if (curr->data <= data)
    {
        curr->next = temp;
        return head;
    }
    return head;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;

        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        int k;
        cin >> k;
        head = sortedInsert(head, k);
        printList(head);
    }
    return 0;
}