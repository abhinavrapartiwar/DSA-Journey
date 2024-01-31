#include <bits/stdc++.h>
using namespace std;
int zero(int arr[], int n)
{
    int prefix_sum = 0;
    unordered_set<int> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (s.count(prefix_sum))
            count++;
        if (prefix_sum == 0)
            count++;
        s.insert(prefix_sum);
    }
    return count;
}
int main()
{
    int arr[] = {-3, 2, 1, 4};
    cout << zero(arr, 4) << endl;
    return 0;
}