#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
bool hasCycle(ListNode *head)
{
    unordered_set<ListNode *> s;
    ListNode *curr = head;
    while (curr != NULL)
    {
        if (s.find(curr) != s.end())
            return true;
        else
            s.insert(curr);
        curr = curr->next;
    }
    return false;
}

// Usinf floyd cycle detection
bool hasCycle(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    if (head == NULL)
        return false;
    while (fast->next != NULL && fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
}
int main()
{

    return 0;
}