#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *tree_creation(node *root)
{
    int d;
    cout << "Enter the data" << endl;
    cin >> d;
    root = new node(d);
    if (d == -1)
        return NULL;
    cout << "Enter data left of " << d << endl;
    root->left = tree_creation(root->left);
    cout << "Enter data right of " << d << endl;
    root->right = tree_creation(root->right);
    return root;
}
void LevelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *t = q.front();
        q.pop();
        cout << t->data << " ";
        if (t->left)
            q.push(t->left);
        if (t->right)
            q.push(t->right);
    }
}
int main()
{
    node *root = NULL;
    root = tree_creation(root);
    LevelOrderTraversal(root);
    return 0;
}