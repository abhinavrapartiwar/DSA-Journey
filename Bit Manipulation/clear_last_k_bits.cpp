#include <bits/stdc++.h>
using namespace std;
void clear_last_k_bit(int &n, int k)
{
    int mask=-1<<k;
    n = n&mask;
}
int main()
{
    int n,k;
    cin >> n >> k;
    cout << n << endl;
    clear_last_k_bit(n, k);
    cout << n << endl;
    return 0;
}