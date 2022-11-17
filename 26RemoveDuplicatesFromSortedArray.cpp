#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    if (nums.size() <= 1)
        return 1;

    int i = 1; 
    int j = 1; 

    while (j < nums.size())
    {
        if (nums[j] != nums[j - 1])
        {                      
            nums[i] = nums[j];
            i++;
        }
        j++;
    }

    return i;
}
int main()
{
    FastIO;
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    std::cout
        << removeDuplicates(arr) << std::endl;

    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " " << std::endl;
    }
    return 0;
}