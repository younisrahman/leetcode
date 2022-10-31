#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool isValid(string s)
{
    if (s.length() % 2 == 0)
    {
        stack<char> st;
        st.push('#');
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                char top = st.top();
                if ((s[i] == ')' && top == '(') || (s[i] == '}' && top == '{') || (s[i] == ']' && top == '['))
                    st.pop();
                else
                    return false;
            }
        }
        return (st.top() == '#');
    }
    return false;
}
int main()
{
    FastIO;
    string s = "([)]";
    // string s = "{[]}";
    std::cout << isValid(s) << std::endl;
    return 0;
}