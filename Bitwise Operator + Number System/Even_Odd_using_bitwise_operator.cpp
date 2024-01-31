#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = (n & 1) == 0; // 1 means even and 0 means odd
    cout << ans;
    return 0;
}