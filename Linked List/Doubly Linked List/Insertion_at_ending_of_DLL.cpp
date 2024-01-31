#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
node *add_at_end(node *head, int x)
{
    node *temp = new node(x);
    node *t = head;
    if (head == NULL)
        return temp;
    while (head->next != NULL)
        head = head->next;
    head->next = temp;
    temp->prev = head;
    return t;
}
void recursive_traversal(node *head)
{
    if (head == NULL)
        return;
    cout << head->data << endl;
    recursive_traversal(head->next);
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->prev = head;
    head->next->next = new node(30);
    head->next->next->prev = head->next;
    head = add_at_end(head, 7);
    recursive_traversal(head);
    return 0;
}