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
    for (int i = 0; i < n; i++)
        insert(&root, vec[i]);
    return root;
}
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *curr = head;
    vector<int> vec;
    while (curr != NULL)
    {
        vec.push_back(curr->val);
        curr = curr->next;
    }
    if (vec.size() % k != 0)
    {
        for (int i = 0; i <= vec.size() - 1 - k && i < vec.size(); i += k)
            reverse(vec.begin() + i, vec.begin() + k + i);
        ListNode *newhead = NULL;
        ListNode *root = arrayToList(vec, vec.size());
        return root;
    }
    else
    {
        for (int i = 0; i < vec.size(); i += k)
            reverse(vec.begin() + i, vec.begin() + k + i);
        ListNode *newhead = NULL;
        ListNode *root = arrayToList(vec, vec.size());
        return root;
    }
}
void printList(ListNode *ListNode)
{
    while (ListNode != NULL)
    {
        cout << ListNode->val << " ";
        ListNode = ListNode->next;
    }
    cout << "\n";
}
int main()
{
    // ListNode *head = new ListNode(10);
    // head->next = new ListNode(20);
    // head->next->next = new ListNode(30);
    // head->next->next->next = new ListNode(40);
    // head = reverseList(head, 2);
    // printList(head);
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 4;
    for (int i = 0; i <= vec.size() - 1 - k && i < vec.size(); i += k)
        reverse(vec.begin() + i, vec.begin() + k + i);
    for (auto x : vec)
        cout << x << endl;
    return 0;
}