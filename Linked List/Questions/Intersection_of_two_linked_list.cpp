#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *curr1 = headA, *curr2 = headB;
    int m = 0, n = 0;
    while (curr1 != NULL)
    {
        m++;
        curr1 = curr1->next;
    }
    while (curr2 != NULL)
    {
        n++;
        curr2 = curr2->next;
    }
    curr1 = headA;
    curr2 = headB;
    if (m > n)
    {
        for (int i = 0; i < m - n; i++)
        {
            curr1 = curr1->next;
        }
    }
    else
    {
        for (int i = 0; i < n - m; i++)
        {
            curr2 = curr2->next;
        }
    }
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1 == curr2)
            return curr1;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return NULL;
}
int main()
{

    return 0;
}