#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
void solution(string s)
{
    vector<int> str(256, -1);
    int start = -1, maxLength = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (str[s[i]] > start)
        {
            start = str[s[i]];
        }
        str[s[i]] = i;
        maxLength = max(maxLength, i - start);
    }
    std::cout << maxLength << std::endl;
}
int main()
{
    FastIO;
    string s = "hrtryta";
    solution(s);
    return 0;
}