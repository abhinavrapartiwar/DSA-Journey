#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
node *add_at_end(node *head, int x)
{
    node *curr = new node(x);
    if (head == NULL)
    {
        head->next = head;
        return head;
    }
    node *t = head->next;
    head->next = curr;
    curr->next = t;
    swap(curr->data, head->data);
    return curr;
}
void traversal(node *head)
{
    if (head->next == head)
    {
        cout << head->data << endl;
        return;
    }
    node *t = head;
    cout << head->data << endl;
    head = head->next;
    while (head != t)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    head = add_at_end(head, 70);
    traversal(head);
    return 0;
}