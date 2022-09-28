#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    FastIO;
    int arr[7] = {3, 5, 1, 7, 4, 9, 3};
    int minSoFar = arr[0];
    int profit = 0;
    for (int i = 0; i < 7; i++)
    {
        minSoFar = min(minSoFar, arr[i]);
        profit = max(profit, (arr[i] - minSoFar));
    }

    std::cout << profit << std::endl;

    return 0;
}