#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int key;
    int value;
    node *next;
    node *prev;
    node(int x, int y)
    {
        key = x;
        value = y;
        prev = NULL;
        next = NULL;
    }
};
class LRUCache
{
public:
    node *head = new node(0, 0);
    node *tail = new node(0, 0);
    unordered_map<int, node *> m;
    int counter = 0;
    int capacity = 0;
    LRUCache(int _capacity)
    {
        capacity = _capacity;
        node *_newnode = new node(0, 0);
        head->next = _newnode;
        _newnode->prev = head;
        _newnode->next = tail;
        tail->prev = _newnode;
        for (int i = 1; i < capacity; i++)
        {
            node *newnode = new node(0, 0);
            node *prev = tail->prev;
            prev->next = newnode;
            newnode->prev = prev;
            newnode->next = tail;
            tail->prev = newnode;
        }
    }
    int get(int key)
    {
        if (m.find(key) != m.end())
        {
            node *temp = m[key];
            m.erase(key);
            node *newnode = new node(temp->key, temp->value);
            node *next = head->next;
            head->next = newnode;
            newnode->prev = head;
            newnode->next = next;
            next->prev = newnode;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            m[key] = newnode;
            counter++;
            return newnode->value;
        }
        else
            return -1;
    }
    void put(int key, int value)
    {
        if (m.find(key) != m.end())
        {
            node *temp = m[key];
            m.erase(key);
            node *newnode = new node(key, value);
            node *next = head->next;
            head->next = newnode;
            newnode->prev = head;
            newnode->next = next;
            next->prev = newnode;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            m[key] = newnode;
        }
        else if (counter >= capacity)
        {
            tail->prev->prev->next = tail;
            tail->prev = tail->prev->prev;
            m.erase(tail->prev->key);
            node *newnode = new node(key, value);
            node *next = head->next;
            head->next = newnode;
            newnode->prev = head;
            newnode->next = next;
            next->prev = newnode;
            m[key] = newnode;
        }
        else
        {
            node *newnode = new node(key, value);
            node *next = head->next;
            head->next = newnode;
            newnode->prev = head;
            newnode->next = next;
            next->prev = newnode;
            m[key] = newnode;
        }
    }
};
int main()
{

    return 0;
}