#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
vector<string> fizzBuzz(int n)
{
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        bool isDivisible3 = j % 3 == 0;
        bool isDivisible5 = j % 5 == 0;
        if (isDivisible3 && isDivisible5)
        {
            s[i] = "FizzBuzz";
        }
        else if (isDivisible3)
        {
            s[i] = "Fizz";
        }
        else if (isDivisible5)
        {
            s[i] = "Buzz";
        }
        else
        {
            s[i] = to_string(j);
        }
    }

    return s;
}
int main()
{
    FastIO;
    vector<string> vs = fizzBuzz(15);
    for (int i = 0; i < vs.size(); i++)
        std::cout << vs[i] << ' ';
    return 0;
}