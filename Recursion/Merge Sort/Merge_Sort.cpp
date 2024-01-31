#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec, int s, int e)
{
    vector<int> temp;
    int m = (s + e) / 2;
    int i = s, j = m + 1;
    while (i <= m && j <= e)
    {
        if (vec[i] > vec[j])
        {
            temp.push_back(vec[j]);
            j++;
        }
        else
        {
            temp.push_back(vec[i]);
            i++;
        }
    }
    while (i <= m)
    {
        temp.push_back(vec[i]);
        i++;
    }
    while (j <= e)
    {
        temp.push_back(vec[j]);
        j++;
    }
    int k = 0;
    for (int ind = s; ind <= e; ind++)
        vec[ind] = temp[k++];
    return;
}
void merge_sort(vector<int> &vec, int s, int e)
{
    if (s >= e)
        return;
    int m = (s + e) / 2;
    merge_sort(vec, s, m);
    merge_sort(vec, m + 1, e);
    return merge(vec, s, e);
}
int main()
{
    vector<int> vec = {5, 3, 4, 2, 1};
    merge_sort(vec, 0, vec.size() - 1);
    for (auto value : vec)
        cout << value << endl;
    return 0;
}
// Example for How to copy string into another with specific range
// vector<int> v1 = {2, 5, 7, 9, 10, 11, 12};
// vector<int> v2;
// auto mid = v1.begin() + v1.size() / 2;
// copy(mid, v1.end(), back_inserter(v2));
// for (auto value : v2)
//     cout << value << endl;
//