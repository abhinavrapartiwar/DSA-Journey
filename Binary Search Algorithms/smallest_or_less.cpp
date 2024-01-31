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
        if (t == arr[m])
        {
            while (m + 1 < l && arr[m + 1] == t)
                m++;
            break;
        }
        else if (t < arr[m])
            e = m - 1;
        else
            s = m + 1;
    }
    return m + 1;
}
int main()
{
    int t = 5, l = 6, ans;
    int a[] = {1, 2, 5, 5, 5, 5};
    ans = bsa(a, t, l);
    cout << ans;
    return 0;
}