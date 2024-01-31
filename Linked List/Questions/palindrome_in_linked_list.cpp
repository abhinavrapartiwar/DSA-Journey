#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
bool isPalindrome(ListNode *head)
{
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode *prev = slow, *curr = slow->next, *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        fast = head;
        while (prev != NULL)
        {
            if (prev->val != fast->val)
                return false;
            prev = prev->next;
            fast = fast->next;
        }
        return true;
    }
}
int main()
{

    return 0;
}