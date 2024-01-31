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
void preorder_inorder_postorder(TreeNode *root, vector<int> &pre, vector<int> &in, vector<int> &post)
{
    stack<pair<TreeNode *, int>> st;
    st.push({root, 1});
    while (!st.empty())
    {
        if (st.top().second == 1)
        {
            pair<TreeNode *, int> temp = st.top();
            pre.push_back(temp.first->val);
            st.pop();
            temp.second++;
            st.push(temp);
            if (temp.first->left)
            {
                st.push({temp.first->left, 1});
            }
        }
        else if (st.top().second == 2)
        {
            pair<TreeNode *, int> temp = st.top();
            in.push_back(temp.first->val);
            st.pop();
            temp.second++;
            st.push(temp);
            if (temp.first->right)
            {
                st.push({temp.first->right, 1});
            }
        }
        else
        {
            post.push_back(st.top().first->val);
            st.pop();
        }
    }
}
int main()
{
    
    return 0;
}