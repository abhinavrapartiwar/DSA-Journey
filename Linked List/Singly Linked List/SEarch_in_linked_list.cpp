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
int search(node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
    int ans = search(head->next, x);
    return ans == -1 ? -1 : ans + 1;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout << search(head, 60);
    return 0;
}