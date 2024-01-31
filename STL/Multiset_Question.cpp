#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        multiset<long long> ms;
        long n, k;
        cin >> n >> k;
        long count = 0;   
        for (long i = 0; i < n; i++)
        {
            long candy;
            cin >> candy;
            ms.insert(candy);
        }
        for (long i = 0; i < k; i++)
        {
            auto it = --(ms.end());
            long can = *it;
            count += can;
            ms.erase(it);
            ms.insert(can / 2);
        }
        cout << count << endl;
    }
    return 0;
}