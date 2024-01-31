#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
public:
    stack<pair<int, int>> s;
    int index;
    StockSpanner()
    {
        index = 0;
        s = {};
    }
    int next(int price)
    {
        if (s.empty() == true)
        {
            s.push({price, index++});
            return 1;
        }
        while (s.empty() == false && price >= (s.top()).first)
        {
            s.pop();
        }
        int ans = s.empty() ? index + 1 : index - s.top().second;
        s.push({price, index++});
        return ans;
    }
};
int main()
{
    int arr[] = {100, 80, 60, 70, 60, 75, 85};

    return 0;
}