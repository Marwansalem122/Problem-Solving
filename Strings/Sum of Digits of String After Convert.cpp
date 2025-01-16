#include <bits/stdc++.h>
using namespace std;
class SumOfDigitsOfStringAfterConvert
{
public:
    int getLucky(string s, int k)
    {
        string result;
        int sum = 0;
        for (char c : s)
        {
            int x = c - 'a' + 1;
            sum += x / 10 + x % 10;
        }
        k--;
        int ans;
        while (k--)
        {
            ans = 0;
            while (sum)
            {
                ans += sum % 10;
                sum /= 10;
            }
            sum = ans;
        }
        return sum;
    }
};
