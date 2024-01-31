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
void insert(ListNode **root, int item)
{
    ListNode *temp = new ListNode;
    ListNode *ptr;
    temp->val = item;
    temp->next = NULL;
    if (*root == NULL)
        *root = temp;
    else
    {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
ListNode *arrayToList(vector<int> vec, int n)
{
    ListNode *root = NULL;
    for (int i = 1; i < n; i++)
        insert(&root, vec[i]);
    return root;
}
ListNode *mergeNodes(ListNode *head)
{
    ListNode *curr = head->next;
    ListNode *newans = new ListNode(0);
    ListNode *ans = newans;
    int sum = 0;
    while (curr != NULL)
    {
        if (curr->val == 0)
        {
            ans->next = new ListNode(sum);
            ans = ans->next;
            sum = 0;
        }
        else
            sum += curr->val;
        curr = curr->next;
    }
    return ans->next;
}
int main()
{

    return 0;
}