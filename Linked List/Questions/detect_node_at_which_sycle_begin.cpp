#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *detectCycle(ListNode *head)
{
    unordered_set<ListNode *> s;
    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            slow = head;
            if (slow == fast)
                return fast;
            while (slow && fast)
            {
                slow = slow->next;
                fast = fast->next;
                if (slow == fast)
                {
                    return fast;
                }
            }
        }
    }
    return NULL;
}
int main()
{

    return 0;
}