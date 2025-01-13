
#include <bits/stdc++.h>
using namespace std;
class MinimumTimeDifference
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        int n = timePoints.size();
        vector<bool> v(1440);
        for (int i = 0; i < n; i++)
        {
            int h = stoi(timePoints[i].substr(0, 2));
            int m = stoi(timePoints[i].substr(3, 2));
            if(v[m+h*60]) return 0;
            v[m+h*60] =true;
            }
        int ans = 1440,pre=-1,first=-1;
        for (int i = 0; i < 1440; i++)
        {
            if(!v[i])continue;
            if(first==-1) first=i;
            if(pre!=-1) ans = min(ans, i - pre);
            pre = i;

        }
        return min(ans, 1440 - pre + first);
    }
};