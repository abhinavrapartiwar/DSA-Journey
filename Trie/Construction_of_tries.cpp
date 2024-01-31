#include <bits/stdc++.h>
using namespace std;
class trienode
{
public:
    char value;
    trienode *children[26];
    bool isTernimal;

    trienode(char val)
    {
        this->value = val;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        this->isTernimal = false;
    }
};

void insertion(trienode *root, string word)
{
    cout << "Word for insertion : " << word << endl;
    if (word.length() == 0)
    {
        root->isTernimal = true;
        return;
    }
    char ch = word[0];
    int ind = ch - 'a';
    if (root->children[ind] == NULL)
        root->children[ind] = new trienode(ch);
    insertion(root->children[ind], word.substr(1));
}
void deletion(trienode *root, string word)
{
    if (word.length() == 0)
    {
        root->isTernimal = false;
        return;
    }
    char ch = word[0];
    int ind = ch - 'a';
    if (root->children[ind] == NULL)
        return;
    deletion(root->children[ind], word.substr(1));
}
bool searching(trienode *root, string word)
{
    if (word.length() == 0)
        return root->isTernimal;
    char ch = word[0];
    int ind = ch - 'a';
    if (root->children[ind] == NULL) // child is not there
        return false;
    return searching(root->children[ind], word.substr(1)); // child is there
}
int main()
{
    trienode *root = new trienode('#');
    insertion(root, "lover");
    insertion(root, "lov");
    insertion(root, "loved");
    insertion(root, "load");
    cout << searching(root, "loved") << endl;
    deletion(root, "loved");
    cout << searching(root, "loved") << endl;
    return 0;
}