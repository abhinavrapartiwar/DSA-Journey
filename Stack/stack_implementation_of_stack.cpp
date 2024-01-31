#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class _stack
{
public:
    struct node *head;
    struct node *top;
    int size;
    _stack()
    {
        head = NULL;
        top = NULL;
        size = 0;
    }
    void push(int data)
    {
        node *newnode = new node;
        if (newnode == NULL)
        {
            cout << "Underflow" << endl;
            return;
        }
        size++;
        newnode->data = data;
        newnode->next = NULL;
        if (top == NULL)
        {
            head = newnode;
            top = newnode;
            return;
        }
        top->next = newnode;
        top = newnode;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Underflow" << endl;
            return;
        }
        size--;
        if (head == top)
        {
            node *t = top;
            head = top = NULL;
            delete t;
            return;
        }
        node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        node *t = curr->next;
        curr->next = NULL;
        top = curr;
        delete t;
    }
    int _size()
    {
        return size;
    }
    void peek()
    {
        if (top == NULL)
        {
            cout << "Underflow" << endl;
            return;
        }
        cout << top->data << endl;
    }
    bool isempty()
    {
        if (top == NULL)
            return true;
        return false;
    }
};
int main()
{
    _stack s;
    s.push(5);
    s.push(10);
    s.push(17);
    cout << s._size() << endl;
    s.peek();
    s.pop();
    s.push(45);
    s.peek();
    cout << s.isempty() << endl;
    return 0;
}