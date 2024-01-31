#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    return (int)((pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5));
}
int main()
{
    int n, fn;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << fibo(i) << endl;

    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     int f = -1;
//     int l = str.length();
//     for (int i = l - 1; i >= 0; i--)
//         if (str[i] % 2 == 0)
//         {
//             f = i;
//             break;
//         }
//     for (int i = f - 1; i >= 0; i--)
//         if (str[i] % 2 == 0)
//         {
//             cout << str[i] << endl;
//             break;
//         }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0, p;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     for (int i = 0; i < n - 1; i++)
//     {
//         sum = arr[i] * arr[i + 1];
//         p += sum;
//     }
//     cout << p;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> ans;
//     vector<int> n;
//     cout << "Enter a Number" << endl;
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int sum = 0;
//         string num;
//         cin >> num;
//         for (int i = 0; i < num.length(); i++)
//         {
//             string a = num.substr(i, 1);
//             sum = sum + stoi(a);
//         }
//         n.push_back(stoi(num));
//         ans.push_back(sum);
//     }
//     int ma = 0, temp = 1;
//     for (int i = 0; i < ans.size(); i++)
//         if (ans[i] >= temp)
//         {
//             temp = ans[i];
//             ma = i;
//         }
//     cout << n[ma];
// }