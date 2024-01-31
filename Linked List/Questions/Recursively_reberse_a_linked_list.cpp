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
ListNode *recursive_reverse(ListNode *prev, ListNode *curr)
{
    if (curr == NULL)
        return prev;
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    return recursive_reverse(prev, curr);
}
ListNode *reverseList(ListNode *head)
{
    return recursive_reverse(NULL, head);
}
int main()
{

    return 0;
}