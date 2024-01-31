#include <bits/stdc++.h>
using namespace std;
vector<string> dice_throw(string ans, int target)
{
    if (target == 0)
    {
        vector<string> list;
        list.push_back(ans);
        return list;
    }
    vector<string> answer;
    for (int i = 0; i < 6 && i < target; i++)
    {
        string value = to_string(i + 1);
        vector<string> answer1 = dice_throw(ans + value, target - i - 1);
        answer.insert(answer.end(), answer1.begin(), answer1.end());
    }
    return answer;
}
int main()
{
    vector<string> ans = dice_throw("", 4);
    for (auto value : ans)
        cout << value << endl;
    return 0;
}