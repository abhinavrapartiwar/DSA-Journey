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
node *delete_last_node(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    delete head->next;
    head->next = NULL;
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
    node *head = new node(10);
    head->next = new node(20);
    head->next->prev = head;
    head->next->next = new node(30);
    head->next->next->prev = head->next;
    head = delete_last_node(head);
    recursive_traversal(head);
    return 0;
}