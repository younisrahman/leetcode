#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

struct Compare
{
    bool operator()(pair<int, string> a, pair<int, string> b)
    {
        if (a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};

vector<string> topKFrequent(vector<string> &words, int k)
{
    unordered_map<string, int> m;
    for (int i = 0; i < words.size(); i++)
        m[words[i]]++;

    priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> q;
    for (auto p : m)
        q.push({p.second, p.first});

    vector<string> ans;
    while (k--)
    {
        ans.push_back(q.top().second);
        q.pop();
    }

    return ans;
}

int main()
{
    FastIO;
    vector<string> word = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;
    vector<string> ans = topKFrequent(word, k);
    for (int i = 0; i < ans.size() - 1; i++)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}