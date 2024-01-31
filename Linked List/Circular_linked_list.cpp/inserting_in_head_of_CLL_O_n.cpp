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
node *add_at_head(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
        temp->next = temp;
    node *t = head;
    while (t->next != head)
    {
        t = t->next;
    }
    t->next = temp;
    temp->next = head;
    return temp;
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
    head = add_at_head(head, 50);
    traversal(head);
    return 0;
}