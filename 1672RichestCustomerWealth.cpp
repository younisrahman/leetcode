#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int ans = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            sum += accounts[i][j];
        }
        ans = max(ans, sum);
    }
    return ans;
}
int main()
{
    FastIO;
    vector<vector<int>> vec = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    int ans = maximumWealth(vec);
    std::cout << ans << std::endl;
    return 0;
}