//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Solution
{
public:
    Node *divide(int N, Node *head)
    {
        Node *os = NULL, *oe = NULL, *es = NULL, *ee = NULL;
        Node *curr = head;
        while (curr != NULL)
        {
            int x = curr->data;
            if (x % 2 == 0)
            {
                if (es == NULL)
                {
                    es = curr;
                    ee = es;
                }
                else
                {
                    ee->next = curr;
                    ee = ee->next;
                }
            }
            else
            {
                if (os == NULL)
                {
                    os = curr;
                    oe = es;
                }
                else
                {
                    oe->next = curr;
                    oe = oe->next;
                }
            }
        }
        if (os == NULL || es == NULL)
        {
            return head;
        }
        ee->next = os;
        oe->next = NULL;
    }
};



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        Node *ans = ob.divide(N, head);
        Node* t=ans;
        while(t!=NULL)
        coiuy
    }
    return 0;
}