#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *swapPairs(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *curr = head;
    ListNode *next1 = curr->next;
    ListNode *next2 = next1->next;
    next1->next = curr;
    ListNode *res = swapPairs(next2);
    curr->next = res;
    return next1;
}
int main()
{

    return 0;
}