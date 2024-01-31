#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return (b % a, a);
}
int main()
{
    cout << gcd(4, 9);
    return 0;
}