#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 5)
    {
        cout << 5 << endl;
        return;
    }
    cout << n << endl;
    print(n + 1);
}
int main()
{
    print(1);
    return 0;
}