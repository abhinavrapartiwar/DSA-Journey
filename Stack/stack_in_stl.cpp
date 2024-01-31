#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(17);
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    s.push(45);
    cout << s.top() << endl;
    cout << s.empty() << endl;
    return 0;
}