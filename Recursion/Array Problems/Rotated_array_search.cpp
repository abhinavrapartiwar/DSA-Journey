#include <bits/stdc++.h>
using namespace std;
int rotated_array_search(vector<int> vec, int s, int e, int target)
{
    if (s > e)
        return -1;
    int m = (s + e) / 2;
    if (vec[m] == target)
        return m;
    if (vec[s] <= vec[m])
    {
        if (vec[m] >= target && vec[s] <= target)
            return rotated_array_search(vec, s, m - 1, target);
        else
            return rotated_array_search(vec, m + 1, e, target);
    }
    if (vec[m] <= target && vec[e] >= target)
        return rotated_array_search(vec, m + 1, e, target);
    else
        return rotated_array_search(vec, s, m - 1, target);
}
int main()
{
    vector<int> vec = {5, 6, 7, 8, 9, 1, 2};
    cout << rotated_array_search(vec, 0, vec.size() - 1, 1) << endl;
    return 0;
}