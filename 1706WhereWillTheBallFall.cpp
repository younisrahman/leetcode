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
    if (grid[i][j] == 1 && j + 1 < grid[i].size() && grid[i][j] == 1)
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
    vector<vector<int>> v = {{1, 1, 1, -1, -1}, {1, 1, 1, -1, -1}, {-1, -1, -1, 1, 1}, {1, 1, 1, 1, -1}, {-1, -1, -1, -1, -1}};

    vector<int> ans = findBall(v);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i] << ' ';
    return 0;
}