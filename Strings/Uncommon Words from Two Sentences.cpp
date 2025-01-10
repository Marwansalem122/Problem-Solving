#include <bits/stdc++.h>
using namespace std;
class UncommonWordsFromTwoSentences{
    public:
     vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        stringstream ss(s1+" "+s2);
        while(ss>>s1) mp[s1]++;
        vector<string> result;
        for(auto it:mp){
            if(it.second==1)
                result.push_back(it.first);
        }
        
        return result;
    }
};