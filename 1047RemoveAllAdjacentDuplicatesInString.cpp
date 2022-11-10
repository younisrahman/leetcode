#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

string removeDuplicates(string s)
{
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            s = s.substr(0, i - 1) + s.substr(i + 1, s.size() - 1);
        }
    }
    if (count != 0)
    {
        removeDuplicates(s);
    }
    return s;
}
int main()
{
    FastIO;
    string s = "abbaca";
    std::cout << removeDuplicates(s) << std::endl;
    return 0;
}