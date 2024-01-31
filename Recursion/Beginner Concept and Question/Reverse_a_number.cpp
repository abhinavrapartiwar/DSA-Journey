#include <bits/stdc++.h>
using namespace std;
int sum = 0;
void way1(int n)
{
    if (n == 0)
        return;
    sum = sum * 10 + (n % 10);
    way1(n / 10);
}
int way2(int n, int len)
{
    if (n == 0)
        return 0;
    return (way2(n / 10, len - 1) + (n % 10) * (pow(10, len - 1)));
}
int main()
{
    way1(1824);
    cout << sum << endl;
    cout << way2(1824, 4) << endl;
    return 0;
}