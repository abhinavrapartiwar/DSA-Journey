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
ListNode *removeZeroSumSublists(ListNode *head)
{
    if (head->next == NULL)
        return head;
    unordered_map<int, int> m;
    vector<int> vec;
    ListNode *curr = head;
    while (curr != NULL)
    {
        vec.push_back(curr->val);
        curr = curr->next;
    }
    int res = 0, presum = 0;
    int ans1 = -1, ans2 = -1;
    for (int i = 0; i < vec.size(); i++)
    {
        presum += vec[i];
        if (presum == 0)
        {
            ans1 = 0;
            ans2 = i;
        }
        if (m.find(presum) == m.end())
            m[presum] = i;
        if (m.find(presum) != m.end())
        {
            ans1 = m[presum];
            ans2 = i;
        }
    }
    vec.erase(ans1+1,ans2+1);
}
void printList(ListNode *node)
{
    while (node != NULL)
    {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(-3);
    head->next->next->next->next = new ListNode(-2);
    head = removeZeroSumSublists(head);
    printList(head);
    return 0;
}