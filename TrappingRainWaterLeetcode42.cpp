#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> left(n);
    left[0] = height[0];
    vector<int> right(n);
    right[n - 1] = height[n - 1];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        left[i] = max(height[i], left[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(height[i], right[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += (min(right[i], left[i]) - height[i]);
    }
    return ans;
}
int main()
{
    FastIO;
    int t;

    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    std::cout << trap(v) << std::endl;

    return 0;
}