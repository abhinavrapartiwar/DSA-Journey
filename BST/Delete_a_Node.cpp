#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *deleteNode(Node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == x)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete (root);
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete (root);
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete (root);
            return temp;
        }
        else
        {
            Node *temp = root->left;
            while (temp->right)
                temp = temp->right;
            root->data = temp->data;
            root->left = deleteNode(root->left, temp->data);
            return root;
        }
    }
    else if (root->data > x)
        root->left = deleteNode(root->left, x);
    else
        root->right = deleteNode(root->right, x);
    return root;
}

int main()
{

    return 0;
}