// #include <iostream>
// using namespace std;

// int main(){
//     char arr[] = "apple";
//     int i = 0;
//     while(arr[i] != '\0'){
//         cout<<arr[i]<<endl;
//         i++;
//    }
//     return 0;

// }
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abhinav";
    vector<char> nums(s.begin(), s.end());
    vector<vector<char>> permutations;
    do
    {
        permutations.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    for (auto permutation : permutations)
    {
        for (auto c : permutation)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}