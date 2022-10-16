#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    set<vector<int>> vec;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        { // If number fixed is +ve, stop there because we can't make it zero by searching after it.
            break;
        }
        if (i > 0 && nums[i] == nums[i - 1])
        { // If number is getting repeated, ignore the lower loop and continue.
            continue;
        }
        int p1 = i, p2 = 0, p3 = nums.size() - 1;
        while (p2 < p3)
        {
            if (p1 != p2 && p1 != p3 && p3 != p2)
            {
                if (nums[p1] + nums[p2] + nums[p3] == 0)
                {
                    vector<int> tv = {nums[p1], nums[p2], nums[p3]};
                    sort(tv.begin(), tv.end());

                    vec.insert(tv);
                    p2++;
                }
                else
                {
                    if (nums[p1] + nums[p2] + nums[p3] > 0)
                    {
                        p3--;
                    }
                    else
                    {
                        p2++;
                    }
                }
            }
            else
                p2++;
        }
    }
    vector<vector<int>> sv(vec.begin(), vec.end());
    return sv;
}
int main()
{
    FastIO;
    vector<int> vec = {-1,
                       0,
                       1,
                       2,
                       -1,
                       -4};
    vector<vector<int>> v = threeSum(vec);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        std::cout << std::endl;
    }
    cout << endl;

    return 0;
}