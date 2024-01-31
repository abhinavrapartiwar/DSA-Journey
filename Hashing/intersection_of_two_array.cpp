#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n, a[5];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s.find(a[i]) != s.end())
            ans++;
        s.erase(a[i]);
    }
    cout << ans << endl;
    return 0;
}