#include<bits/stdc++.h>
using namespace std;
class LargestNumber{
public:
    string largestNumber(vector<int>& nums) {
       vector<string>v(nums.size());
       for(int i=0;i<nums.size();i++){
           v[i]=to_string(nums[i]);
       }
         sort(v.begin(),v.end(),[](string a,string b){
              return a+b>b+a;
         });
        string ans;
        for(auto x:v){
            ans+=x;
        }
        if(ans[0]=='0')return "0";
        return ans;

    }
};