
#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.count(nums[i]))
        {
            if (abs(map[nums[i]] - i) <= k)
                return true;
        }
        map[nums[i]] = i;
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