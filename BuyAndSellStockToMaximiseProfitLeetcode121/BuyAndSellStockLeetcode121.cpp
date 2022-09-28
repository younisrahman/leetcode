#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

void stockBFS()
{
    int arr[7] = {3, 5, 1, 7, 4, 9, 3};
    int getArrayLength = sizeof(arr) / sizeof(int);
    std::cout << getArrayLength << std::endl;

    int maximumProfit = 0;
    for (int i = 0; i < getArrayLength; i++)
    {
        for (int j = i + 1; j < getArrayLength; j++)
        {
            if ((arr[j] - arr[i]) > maximumProfit)
            {
                maximumProfit = arr[j] - arr[i];
            }
        }
    }
    std::cout << maximumProfit << std::endl;
}
int main()
{
    FastIO;
    int t;
    // cin >> t;

    stockBFS();
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    // }
    return 0;
}