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
        if (t > arr[m])
            s = m + 1;
        else if (t < arr[m])
            e = m - 1;
        else
            return m;
    }
    return -1;
}
int main()
{
    int t = 4, l = 5, ans;
    int a[] = {1, 3, 4, 4, 6};
    ans = bsa(a, t, l);
    cout << ans;
    return 0;
}