#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *f = NULL;
node *r = NULL;
void _enqueue(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    if (f == NULL)
    {
        f = r = newnode;
        return;
    }
    r->next = newnode;
    r = r->next;
}
void _dequeue()
{
    if (f == NULL)
        return;
    node *t = f;
    f = f->next;
    delete t;
}
bool isempty()
{
    if (f == NULL)
        return true;
    return false;
}
int size()
{
    node *curr = f;
    int count = 0;
    while (curr)
    {
        curr = curr->next;
        count++;
    }
    return count;
}
void front()
{
    cout << f->data << endl;
}
void rear()
{
    cout << r->data << endl;
}
int main()
{
    _enqueue(4);
    _enqueue(7);
    _enqueue(9);
    _dequeue();
    front();
    rear();
    return 0;
}