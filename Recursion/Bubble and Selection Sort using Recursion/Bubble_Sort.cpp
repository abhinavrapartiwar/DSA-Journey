#include <bits/stdc++.h>
using namespace std;
vector<int> &bubble_sort(vector<int> &vec, int i, int j)
{
    if (vec.size() == i) 
        return vec;
    if (j < (vec.size() - i))
    {
        if (vec[j - 1] > vec[j])
        {
            swap(vec[j - 1], vec[j]);
        }
        return bubble_sort(vec, i, ++j);
    }
    else
        return bubble_sort(vec, ++i, 1);
}
int main()
{
    vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> ans = bubble_sort(vec, 0, 1);
    for (auto value : ans)
        cout << value << endl;
    return 0;
}