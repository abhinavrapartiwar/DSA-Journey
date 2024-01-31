#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
// Method1 - O(n) Aux Space
Node *copyRandomList(Node *head)
{
    Node *curr1 = head;
    Node *head1 = NULL;
    unordered_map<Node *, Node *> m;
    while (curr1 != NULL)
    {
        m[curr1] = new Node(curr1->val);
        curr1 = curr1->next;
    }
    curr1 = head;
    while (curr1 != NULL)
    {
        Node *clonenode = m[curr1];
        clonenode->next = m[curr1->next];
        clonenode->random = m[curr1->random];
        curr1 = curr1->next;
    }
    return m[head];
}
// Method2 - O(1) Aux Space
Node *copyRandomList(Node *head)
{
    Node *curr1 = head;
    while (curr1 != NULL)
    {
        Node *next = curr1->next;
        curr1->next = new Node(curr1->val);
        curr1->next->next = next;
        curr1 = next;
    }
    curr1 = head;
    while (curr1 != NULL)
    {
        curr1->next->random = curr1->random != NULL ? curr1->random->next : NULL;
        curr1 = curr1->next->next;
    }
    curr1 = head->next;
    while (curr1 != NULL && curr1->next != NULL)
    {
        Node *next = curr1->next->next;
        curr1->next = curr1->next->next;
        curr1 = curr1->next;
    }
    return head->next;
}
int main()
{

    return 0;
}