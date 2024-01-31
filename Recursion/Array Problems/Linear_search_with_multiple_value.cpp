#include <bits/stdc++.h>
using namespace std;
vector<int> &linearsearch(int arr[], int target, int i, vector<int> &ans, int length)
{

    if (i == length)
        return ans;
    if (arr[i] == target)
        ans.push_back(i);
    return linearsearch(arr, target, i + 1, ans, length);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5};
    vector<int> ans1;
    vector<int> ans = linearsearch(arr, 4, 0, ans1, 6);
    for (auto value : ans1)
        cout << value << endl;
    return 0;
}