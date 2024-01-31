#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<char> &heights)
{
    stack<int> s;
    int ps[heights.size()];
    int ns[heights.size()];
    int answer = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        while (!s.empty() && (int)heights[i] <= (int)heights[s.top()])
            s.pop();
        ps[i] = s.empty() ? 0 : s.top() + 1;
        s.push(i);
    }
    while (!s.empty())
        s.pop();
    for (int i = heights.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && (int)heights[i] <= (int)heights[s.top()])
            s.pop();
        ns[i] = s.empty() ? heights.size() - 1 : s.top() - 1;
        s.push(i);
    }
    for (int i = 0; i < heights.size(); i++)
    {
        answer = max((ns[i] - ps[i] + 1) * (heights[i] - 48), answer);
    }
    return answer;
}
int maximalRectangle(vector<vector<char>> &matrix)
{
    int area = largestRectangleArea(matrix[0]);
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 1)
                matrix[i][j] = ((int)matrix[i - 1][j] - 48) + ((int)matrix[i][j] - 48);
        }
        area = max(area, largestRectangleArea(matrix[i]));
    }
    return area;
}
int main()
{

    return 0;
}