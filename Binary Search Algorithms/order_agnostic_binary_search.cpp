#include <iostream>
using namespace std;
int bsa(int arr[], int t, int l)
{
    int s, e, m;
    s = 0;
    e = l - 1;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (arr[m] > t)
            arr[0] < arr[l - 1] ? e = m - 1 : s = m + 1;
        else if (arr[m] < t)
            arr[0] < arr[l - 1] ? s = m + 1 : e = m - 1;
        else
            return m;
    }
    return -1;
}
int main()
{
    int t = 6, l = 5, ans;
    int a[] = {9, 6, 4, 3, 1};
    ans = bsa(a, t, l);
    cout << ans;
    return 0;
}