#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> p = {2, 3, 4, 5, 6, 7};
    vector<int>::iterator it = p.begin();
    for (it = p.begin(); it != p.end(); it++)
        cout << *(it) << endl;
    return 0;
}