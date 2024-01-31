#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    int f;
    cout << "enter the number you want to find" << endl;
    cin >> f;
    if (s.find(f) == s.end())
        cout << "number not found" << endl;
    else
        cout << "number is found" << endl;
}