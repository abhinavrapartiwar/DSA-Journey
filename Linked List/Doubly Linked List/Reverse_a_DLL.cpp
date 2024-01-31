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
node *reverse_a_dll(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *prev = NULL;
    while (head != NULL)
    {
        prev = head->prev;
        head->prev = head->next;
        head->next = prev;
        head = head->prev;
    }
    return prev->prev;
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
    head = reverse_a_dll(head);
    recursive_traversal(head);
    return 0;
}