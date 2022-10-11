#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> alphabet;
    if (ransomNote.size() > magazine.size())
    {
        return false;
    }
    for (int i = 0; i < magazine.size(); i++)
    {
        alphabet[magazine[i]]++;
    }
    for (int i = 0; i < ransomNote.size(); i++)
    {
        if (alphabet[ransomNote[i]] > 0)
        {
            alphabet[ransomNote[i]]--;
        }
        else
        {
            return false;
        }
    }

    return true;
}
int main()
{
    FastIO;
    int t;
    bool ans = canConstruct("abc", "asdfgbvc");
    std::cout << ans << std::endl;
    return 0;
}