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
    stack<TreeNode *> st1;
    stack<TreeNode *> st2;
    st1.push(root);
    while (!st1.empty())
    {
        TreeNode *node = st1.top();
        st2.push(node);
        st1.pop();
        if (node->left)
            st1.push(node->left);
        if (node->right)
            st1.push(node->right);
    }
    while (!st2.empty())
    {
        ans.push_back(st2.top()->val);
        st2.pop();
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