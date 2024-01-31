#include <bits/stdc++.h>
using namespace std;
class _stack
{
public:
    int top;
    int capacity;
    int stack[50];
    _stack(int n)
    {
        capacity = n;
        top = -1;
    }
    void push(int data)
    {
        if (top == capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        stack[++top] = data;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }
    int size()
    {
        return top + 1;
    }
    int peek()
    {
        if (top == -1)
            return -1;
        return stack[top];
    }
    bool isempty()
    {
        if (top == -1)
            return true;
        return false;
    }
};
int main()
{
    _stack s(10);
    s.push(5);
    s.push(10);
    s.push(17);
    cout << s.size() << endl;
    cout << s.peek() << endl;
    s.pop();
    s.push(45);
    cout << s.peek() << endl;
    cout << s.isempty() << endl;
    return 0;
}