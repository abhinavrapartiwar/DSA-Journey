//count number of paths through which one can reach diagonally opposite side with just moving right and down
#include <bits/stdc++.h>
using namespace std;
int count(int r, int c)
{
    if (r == 1 || c == 1)
        return 1;
    int left = count(r - 1, c);
    int right = count(r, c - 1);
    return (left + right);
}
int main()
{
    cout << count(4, 4) << endl;
    return 0;
}