#include <bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &vec, int i, int j, int l)
{
    if (i == 0)
        return;
    if (j < i)
    {
        if (vec[j] > vec[l])
            selection_sort(vec, i, j + 1, j);
        else
            selection_sort(vec, i, j + 1, l);
    }
    else
    {
        swap(vec[i - 1], vec[l]);
        selection_sort(vec, i - 1, 0, 0);
    }
}
int main()
{
    vector<int> vec = {4, 5, 1, 2, 3};
    selection_sort(vec, vec.size(), 0, 0);
    cout << "after sorting is" << endl;
    for (auto value : vec)
        cout << value << endl;
    return 0;
}