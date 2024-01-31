#include <bits/stdc++.h>
using namespace std;
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int s = low;
    int e = high;
    int m = s + (e - s) / 2;
    int pivot = arr[m];
    while (s <= e)
    {
        while (arr[s] < pivot)
            s++;
        while (arr[e] > pivot)
            e--;
        if (s <= e)
        {            
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    quick_sort(arr, low, e);
    quick_sort(arr, s, high);
}
int main()
{
    vector<int> vec = {4, 5, 1, 2, 3};
    quick_sort(vec, 0, vec.size() - 1);
    cout << "after sorting is" << endl;
    for (auto value : vec)
        cout << value << endl;
    return 0;
}