#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *insertion(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->data)
        root->left = insertion(root->left, data);
    else
        root->right = insertion(root->right, data);
    return root;
}
void Build_BST(Node *&root)
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    while (data != -1)
    {
        root = insertion(root, data);
        cin >> data;
        cout << data << " added." << endl;
    }
    cout << "BST is created" << endl;
}
void printLevelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}
int main()
{
    Node *root = NULL;
    Build_BST(root);
    printLevelOrder(root);
    return 0;
}