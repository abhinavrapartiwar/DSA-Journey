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
void preorder(TreeNode *root, vector<int> &ans)
{
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty())
    {
        TreeNode *temp = s.top();
        ans.push_back(s.top()->val);
        s.pop();
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
}
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    preorder(root, ans);
    return ans;
}
int main()
{

    return 0;
}