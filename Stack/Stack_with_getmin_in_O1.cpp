#include <bits/stdc++.h>
using namespace std;
class Solution
{
    stack<int> s;
    stack<int> aux;

public:
    int getMin()
    {
        return aux.top();
    }
    int pop()
    {
        int i = s.top();
        if (s.top() == aux.top())
            aux.pop();
        s.pop();
        return i;
    }
    void push(int x)
    {
        s.push(x);
        if (aux.top() >= s.top())
            aux.push(x);
    }
};
int main()
{
    Solution s;
    s.push(2);
    s.push(3);
    cout << s.getMin();
    return 0;
}