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
ListNode *middleNode(ListNode *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    int count = 0;
    ListNode *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    int num = (count / 2);
    curr = head;
    for (int i = 0; i < num; i++)
    {
        curr = curr->next;
    }
    return curr;
}
int main()
{

    return 0;
}