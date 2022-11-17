#include <bits/stdc++.h>

using namespace std;
int guess(int num)
{
    int g = 1;
    if (num > g)
    {
        return -1;
    }
    else if (num < g)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int guessNumber(int n)
{

    long low = 0;
    long high = n;

    while (low <= high)
    {
        long mid = (low + high) / 2;
        std::cout << "Mid : " << mid << std::endl;
        int g = guess((int)mid);
        if (g == 0)
        {
            return mid;
        }
        if (g == -1)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int t;

    long long int a = 1063376696 + 2126753390;
    std::cout << a << std::endl;
    // std::cout << guessNumber(1) << std::endl;
    return 0;
}