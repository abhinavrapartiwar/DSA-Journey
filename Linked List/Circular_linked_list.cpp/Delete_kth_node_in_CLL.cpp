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
node *remove_kth_node(node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    if (k == 1)
    {
        node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        node *t = temp->next;
        temp->next = temp->next->next;
        delete t;
        return temp->next;
    }
    int count = 1;
    bool error = false;
    node *curr = head;
    while (count != k - 1)
    {
        curr = curr->next;
        count++;
        if (curr->next == head)
        {
            error = true;
            break;
        }
    }
    if (error == false)
    {
        node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
    else
        return head;
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
    head = remove_kth_node(head, 4);
    traversal(head);
    return 0;
}