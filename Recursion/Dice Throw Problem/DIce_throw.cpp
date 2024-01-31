#include <bits/stdc++.h>
using namespace std;
void dice_throw(string ans, int target)
{
    if (target == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < 6 && i < target; i++)
    {
        string value = to_string(i + 1);
        dice_throw(ans + value, target - i - 1);
    }
}
int main()
{
    dice_throw("", 4);
    return 0;
}