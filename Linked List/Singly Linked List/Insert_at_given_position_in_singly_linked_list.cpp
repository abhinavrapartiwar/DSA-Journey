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
node *add_at_pos(node *head, int pos, int x)
{
    node *temp = head;
    node *new_node = new node(x);
    if (pos == 1)
    {
        new_node->next = head;
        return new_node;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        if (head->next == NULL && pos - i > 1)
        {
            return temp;
        }
        head = head->next;
    }
    node *t = head->next;
    head->next = new_node;
    new_node->next = t;
    return temp;
}
void traverse(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head = add_at_pos(head, 3, 5);
    traverse(head);
    return 0;
}