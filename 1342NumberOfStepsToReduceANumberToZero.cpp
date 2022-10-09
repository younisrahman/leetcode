#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int numberOfSteps(int num)
{
    int count = 0;
    while (num > 0)
    {
        if ((num & 1) == 0)
        {
            num = num / 2;
            count++;
        }
        else
        {
            num--;
            count++;
        }
    }
    return count;
}
int main()
{
    FastIO;
    int ans = numberOfSteps(8);
    std::cout << ans << std::endl;
    return 0;
}