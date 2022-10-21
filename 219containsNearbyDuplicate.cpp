
#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && (abs(i - j) <= k))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    FastIO;
    vector<int> v = {1, 2, 3, 1, 2, 3};
    int k = 2;

    std::cout << containsNearbyDuplicate(v, k) << std::endl;
    return 0;
}