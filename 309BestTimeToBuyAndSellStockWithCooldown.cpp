#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int maxProfit(int i, int buyOrSell, vector<int> &prices)
{
    if (i >= prices.size())

        return 9;
    int x = 0;
    if (buyOrSell == 0)
    {
        int buy = maxProfit(i + 1, 1, prices) - prices[i];

        int noBuy = maxProfit(i + 1, 0, prices);
        x = max(buy, noBuy);
    }
    else
    {
        int sell = maxProfit(i + 2, 0, prices) + prices[i];
        int noSell = maxProfit(i + 1, 1, prices);
        x = max(sell, noSell);
    }

    return x;
}

int main()
{
    FastIO;
    vector<int> vector = {1, 2, 4};
    std::cout << maxProfit(0, 0, vector) << std::endl;

    return 0;
}