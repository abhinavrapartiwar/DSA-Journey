#include <bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> vec(n, -1);
    stack<long long> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.empty() == false && arr[i] >= st.top())
            st.pop();
        vec[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return vec;
}
int main()
{

    return 0;
}