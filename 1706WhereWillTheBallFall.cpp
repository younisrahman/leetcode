#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int dfs(int i, int j, vector<vector<int>> &grid)
{
    if (i >= grid.size())
    {
        return j;
    }
    // left to right
    if (grid[i][j] == 1 && j + 1 < grid[0].size() && grid[i][j + 1] == 1)
    {
        return dfs(i + 1, j + 1, grid);
    }
    else if (grid[i][j] == -1 && j > -0 && grid[i][j - 1] == -1)
    {
        return dfs(i + 1, j - 1, grid);
    }
    else
    {
        return -1;
    }
}
vector<int> findBall(vector<vector<int>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();
    vector<int> ans(col);
    for (int i = 0; i < col; i++)
        ans[i] = dfs(0, i, grid);
    return ans;
}
int main()
{
    FastIO;
    vector<vector<int>> v = {{-1, 1, -1, -1, -1, -1, -1, -1, 1, -1, -1, -1, -1, 1, 1, -1, -1, -1, 1, 1, 1, -1, -1, 1, 1, -1, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 1, -1, -1, -1, -1, -1, -1, -1, 1, -1, -1, 1, -1, 1, -1, -1, 1, 1, -1, 1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, -1, 1, 1, 1, -1, 1, 1, 1, -1, -1, -1, 1, -1, 1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, -1, -1, -1, -1}};

    vector<int>
        ans = findBall(v);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i] << ' ';
    return 0;
}
// [ -1, -1, -1, 2, 3, 4, 5, 6, -1, -1, 9, 10, 11, 14, -1, -1, 15, 16, 19, 20, -1, -1, 21, 24, -1, -1, 25, -1, -1, 28, 29, 30, 31, 32, 33, 34, 35, -1, -1, -1, -1, 40, 41, 42, 43, 44, 45, -1, -1, 48, -1, -1, -1, -1, 53, 56, -1, -1, -1, -1, 59, 60, 61, 64, 65, 66, 67, 68, -1, -1, 71, 72, -1, -1, 75, 76, -1, -1, 77, 78, -1, -1, -1, -1, 83, 86, -1, -1, 87, -1, -1, -1, -1, 94, 95, -1, -1, 96, 97, 98 ]