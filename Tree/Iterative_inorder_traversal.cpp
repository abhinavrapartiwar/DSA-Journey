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
void inorder(TreeNode *root, vector<int> &ans)
{
    stack<TreeNode *> s;
    TreeNode *node = root;
    while (root)
    {
        if (node != NULL)
        {
            s.push(node);
            node = node->left;
        }
        else
        {
            if (s.empty())
                break;
            node = s.top();
            ans.push_back(s.top()->val);
            s.pop();
            node = node->right;
        }
    }
}
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    inorder(root, ans);
    return ans;
}
int main()
{

    return 0;
}