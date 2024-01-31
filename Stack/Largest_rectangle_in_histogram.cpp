#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights)
{
    int ans = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int area = 0;
        for (int x = i + 1; x < heights.size(); x++)
        {
            if (heights[i] <= heights[x])
                area += heights[i];
            else
                break;
        }
        for (int y = i - 1; y >= 0; y--)
        {
            if (heights[i] <= heights[y])
                area += heights[i];
            else
                break;
        }
        ans = max(ans, area);
    }
    return ans;
}
int main()
{

    return 0;
}