#include <bits/stdc++.h>
using namespace std;
void triangle(int r, int c)
{
    if (r == 0)
        return;
    if (r > c)
    {
        triangle(r, ++c);
        cout << "#";
    }
    else
    {
        triangle(--r, 0);
        cout << "" << endl;
    }
}
int main()
{
    triangle(4, 0);
    return 0;
}