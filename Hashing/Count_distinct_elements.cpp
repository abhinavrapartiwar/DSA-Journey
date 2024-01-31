#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    cout << "enter total number you want to enter" << endl;
    int n;
    cin >> n;
    cout << "enter the number" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size() << endl;
    return 0;
}