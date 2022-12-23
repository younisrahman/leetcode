#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int maximumProfit(int i, int buyOrSell, vector<int> &prices, unordered_map<string, int> m)
{
    if (i >= prices.size())
    {
        return 0;
    }
    int x = 0;
    string key = to_string(i) + "key" + to_string(buyOrSell);

    if (m.find(key) == m.end())
    {
        if (buyOrSell == 0)
        {
            int buy = maximumProfit(i + 1, 1, prices, m) - prices[i];
            int noBuy = maximumProfit(i + 1, 0, prices, m);
            x = max(buy, noBuy);
        }
        else
        {
            int sell = maximumProfit(i + 2, 0, prices, m) + prices[i];
            int noSell = maximumProfit(i + 1, 1, prices, m);
            x = max(sell, noSell);
        }
    }
    else
    {
        return m[key];
    }

    m.insert({key, x});

    return x;
}
int maxProfit(vector<int> &prices)
{
    unordered_map<string, int> m;
    return maximumProfit(0, 0, prices, m);
}

int main()
{
    FastIO;
    vector<int> vector = {1, 2, 4};
    std::cout << maxProfit(vector) << std::endl;

    return 0;
}