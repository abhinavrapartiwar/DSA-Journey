#include <bits/stdc++.h>
using namespace std;
class trienode
{
public:
    char value;
    trienode *children[26];
    bool isTerminal;

    trienode(char val)
    {
        this->value = val;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        this->isTerminal = false;
    }
};

void insertion(trienode *root, string word)
{
    cout << "Word for insertion : " << word << endl;
    if (word.length() == 0)
    {
        root->isTerminal = true;
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
        root->isTerminal = false;
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
        return root->isTerminal;
    char ch = word[0];
    int ind = ch - 'a';
    if (root->children[ind] == NULL) // child is not there
        return false;
    return searching(root->children[ind], word.substr(1)); // child is there
}
void suggestion(trienode *root, string word, string wordformed, vector<string> &ans)
{
    if (word.length() == 0)
    {
        if (root->isTerminal == true)
            ans.push_back(wordformed);
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i] != NULL)
            {
                char ch = root->children[i]->value;
                suggestion(root->children[i], word, wordformed + ch, ans);
            }
        }
    }
    else
    {
        char ch = word[0];
        int ind = ch - 'a';
        if (root->children[ind] != NULL)
            suggestion(root->children[ind], word.substr(1), wordformed + ch, ans);
    }
}
void suggestionII(trienode *root, string word, string wordformed, vector<vector<string>> &ans)
{
    if (word.length() == 0)
        return;
    if (root->isTerminal == true)
        ans.push_back(wordformed);
    for (int i = 0; i < 26; i++)
    {
        if (root->children[i] != NULL)
        {
            char ch = root->children[i]->value;
            suggestionII(root->children[i], word, wordformed + ch, ans);
        }
    }
    char ch = word[0];
    int ind = ch - 'a';
    if (root->children[ind] != NULL)
        suggestionII(root->children[ind], word.substr(1), wordformed + ch, ans);
}
int main()
{
    trienode *root = new trienode('#');
    insertion(root, "cater");
    insertion(root, "care");
    insertion(root, "com");
    insertion(root, "lover");
    insertion(root, "loved");
    insertion(root, "load");
    insertion(root, "lov");
    insertion(root, "bat");
    insertion(root, "cat");
    insertion(root, "car");
    vector<string> ans;
    suggestionII(root, "love", "", ans);
    cout << "String are - " << endl;
    for (auto i : ans)
        cout << i << endl;
    return 0;
}