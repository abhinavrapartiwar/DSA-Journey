#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int r = image.size(), c = image[0].size();
    for (int i = 0; i < r; i++)
        for (int j = 0; j < (c + 1) / 2; j++)
        {
            int temp;
            temp = image[i][j] ^ 1;
            image[i][j] = image[i][c - j - 1] ^ 1;
            image[i][c - j - 1] = temp;
        }
    return image;
}
int main()
{
    vector<vector<int>> image;
    int r = 3, c = 3;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; i++)
            cin >> image[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; i++)
            cout << image[i][j] << " ";
    cout << endl;
    return 0;
}