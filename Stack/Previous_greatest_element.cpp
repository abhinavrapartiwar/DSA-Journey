#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    stack<int> s;
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[i] >= s.top())
            s.pop();
        int ans = s.empty() ? -1 : s.top();
        s.push(arr[i]);
        cout << ans << " ";
    }
    return 0;
}