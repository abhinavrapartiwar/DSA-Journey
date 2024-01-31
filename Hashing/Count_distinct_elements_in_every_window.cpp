#include <bits/stdc++.h>
using namespace std;
vector<int> countDistinct(int A[], int n, int k)
{
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        m[A[i]] += 1;
    }
    ans.push_back(m.size());
    for (int i = k; i < n; i++)
    {
        m[A[i - k]] -= 1;
        if (m[A[i - k]] <= 0)
            m.erase(A[i - k]);
        m[A[i]] += 1;
        ans.push_back(m.size());
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 10, 10, 30, 40};
    int n = 6;
    int k = 4;
    countDistinct(arr, n, k);
    return 0;
}