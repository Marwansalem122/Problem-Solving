#include<bits/stdc++.h>
using namespace std;
class TwoSum{
    public:
     vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
         if(size==2){
            return {0,1};
        }
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<size;i++){
            int value=target-nums[i];
            if(mp.find(value)==mp.end()){
                mp[nums[i]]=i;
                cout<<"Added in map "<<mp[nums[i]]<<endl;
           } else{
            result.push_back(mp[value]);
            result.push_back(i);
            cout<<"Added in vector "<<mp[value]<<" "<<i<<endl;
            break;
            }
        }
        return result;
    }
};