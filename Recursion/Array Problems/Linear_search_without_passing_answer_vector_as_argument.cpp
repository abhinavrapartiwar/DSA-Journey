#include <bits/stdc++.h>
using namespace std;
vector<int> &linearsearch(vector<int> &vec, int target, int i)
{
    vector<int> answer;
    if (i == vec.size())
        return answer;
    if (vec[i] == target)
        answer
            .push_back(i);
    vector<int> ans_from_previous_call = linearsearch(vec, target, i + 1);
    answer.insert(answer.end(), ans_from_previous_call.begin(), ans_from_previous_call.begin() + ans_from_previous_call.size());
    return answer;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 5};
    vector<int> answer = linearsearch(arr, 4, 0);
    for (auto value : answer)
        cout << value << endl;
    return 0;
}