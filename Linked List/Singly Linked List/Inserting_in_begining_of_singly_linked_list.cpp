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
node *add_at_begin(node *head, int x)
{
    node *new_value = new node(x);
    new_value->next = head;
    return new_value;
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
    head = add_at_begin(head, 5);
    head = add_at_begin(head, 10);
    head = add_at_begin(head, 20);
    head = add_at_begin(head, 30);
    recursive_traversal(head);
    return 0;
}