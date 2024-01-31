#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    bitset<25> num(n);
    cout << num << endl;
    while (n > 0)
    {
        count++;
        n -= n & (-n);
        bitset<25> temp(n);
        cout << temp << endl;
    }
    cout << count;
    return 0;
}