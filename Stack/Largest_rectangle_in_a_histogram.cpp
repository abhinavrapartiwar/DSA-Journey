#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights)
{
    stack<int> s;
    int ps[heights.size()];
    int ns[heights.size()];
    int answer = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        while (!s.empty() && heights[i] <= heights[s.top()])
            s.pop();
        ps[i] = s.empty() ? 0 : s.top() + 1;
        s.push(i);
    }
    while (!s.empty())
        s.pop();
    for (int i = heights.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && heights[i] <= heights[s.top()])
            s.pop();
        ns[i] = s.empty() ? heights.size() - 1 : s.top() - 1;
        s.push(i);
    }
    for (int i = 0; i < heights.size(); i++)
    {
        answer = max((ns[i] - ps[i] + 1) * heights[i], answer);
    }
    return answer;
}
int main()
{

    return 0;
}