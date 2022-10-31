#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool isToeplitzMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size() - 1; i++)
    {
        for (int j = 0; j < matrix[i].size() - 1; j++)
        {
            if (matrix[i + 1][j + 1] != matrix[i][j])
                return false;
        }
    }

    return true;
}
int main()
{
    FastIO;
    vector<vector<int>> v = {{1, 2, 3, 4}, {5, 4, 2, 3}, {9, 5, 1, 2}};
    std::cout << isToeplitzMatrix(v) << std::endl;
    return 0;
}