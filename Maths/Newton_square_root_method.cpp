// Newton Square root Method
#include <bits/stdc++.h>
using namespace std;
double newton_sqrt(int num)
{
    double x = num;
    double root;
    while (true)
    {
        root = 0.5 * (x + (num / x));
        if (abs(root - x) < 0.01)
            break;
        x = root;
    }
    return root;
}
int main()
{
    cout << newton_sqrt(625);
    return 0;
}