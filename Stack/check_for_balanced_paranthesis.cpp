#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() == true)
            st.push(s[i]);
        else
        {
            if (st.top() == '{' && s[i] == '}')
                st.pop();
            else if (st.top() == '[' && s[i] == ']')
                st.pop();
            else if (st.top() == '(' && s[i] == ')')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if (st.empty() == true)
        return true;
    return false;
}
int main()
{

    return 0;
}