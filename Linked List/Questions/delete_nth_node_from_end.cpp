#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    ListNode *curr = head;
    int size = 0;
    while (curr != NULL)
    {
        curr = curr->next;
        size++;
    }
    if (size == n)
        return head->next;
    curr = head;
    for (int i = 0; i < size - n - 1; i++)
        curr = curr->next;
    curr->next = curr->next->next;
    return head;
}
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    ListNode *slow = head;
    ListNode *fast = head;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
    if (fast == NULL)
        return head->next;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}
int main()
{

    return 0;
}