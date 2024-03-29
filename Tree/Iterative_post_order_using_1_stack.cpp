#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void postorder(TreeNode *root, vector<int> &ans)
{
    stack<TreeNode *> st;
    TreeNode *curr = root;
    TreeNode *temp = NULL;
    while (curr != NULL || !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            temp = st.top()->right;
            if (temp == NULL)
            {
                temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                while (!st.empty() && st.top()->right == temp)
                {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            }
            else
            {
                curr = temp;
            }
        }
    }
}
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    postorder(root, ans);
    return ans;
}
int main()
{

    return 0;
}