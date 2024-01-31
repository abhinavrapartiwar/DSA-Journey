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
    node *end = new node(x);
    if (head == NULL)
    {
        return end;
    }
    node *temp = head;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = end;
    return temp;
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
    node *head = NULL;
    head = add_at_end(head, 10);
    head = add_at_end(head, 20);
    head = add_at_end(head, 30);
    head = add_at_end(head, 40);
    recursive_traversal(head);
    return 0;
}