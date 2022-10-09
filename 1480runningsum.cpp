#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
}
int main()
{
    FastIO;
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans = runningSum(vec);

    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i] << ' ';

    std::cout << std::endl;
    return 0;
}