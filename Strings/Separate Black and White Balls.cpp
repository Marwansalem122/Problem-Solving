#include <bits/stdc++.h>
using namespace std;
class SeparateBlackAndWhiteBalls
{
public:
    long long minimumSteps(string& s)
    {
        long long steps = 0;
        int i=0;
        for (char c:s)
        {
            (c=='1')?i++:steps+=i;
        }
        return steps;
    }
};