#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool increasingTriplet(vector<int> &nums)
{
    long long a = 1e10, b = 1e10;
    for (int i : nums)
    {
        if (i > b)
            return true;
        if (i > a)
            b = min((long long)i, b);
        a = min((long long)i, a);
    }
    return false;

    // long long minNumber = 1e10;
    // bool ans = false;
    // for (int i = 0; i < nums.size(); i++)
    // {

    //     if (nums[i + 1] && nums[i] < nums[i + 1])
    //     {
    //         minNumber = min((long long)nums[i + 1], minNumber);
    //     }
    //     if (nums[i] > minNumber)
    //     {
    //         ans = true;
    //         break;
    //     }
    // }
    // return ans;
}
int main()
{
    FastIO;
    vector<int> arr = {1, 2, 3, 4, 5};
    std::cout << increasingTriplet(arr) << std::endl;
    vector<int> arr2 = {5, 4, 3, 2, 1};
    std::cout << increasingTriplet(arr2) << std::endl;
    vector<int> arr3 = {2, 4, -2, -3};
    std::cout << increasingTriplet(arr3) << std::endl;
    return 0;
}