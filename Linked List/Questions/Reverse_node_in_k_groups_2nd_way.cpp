#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
} * head;
struct node *reverse_in_k(struct node *head, int k)
{
    struct node *curr = head, *prev = NULL, *next = NULL;
    int count = 0, flag = 0;
    struct node *temp = head;
    while (flag < k)
    {
        if (temp == NULL)
        {
            return head;
        }
        flag++;
    }
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        node *res_head = reverse_in_k(next, k);
        head->next = res_head;
    }
    return prev;
}
int main()
{

    return 0;
}