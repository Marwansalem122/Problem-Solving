
#include<bits/stdc++.h>
using namespace std;
class TheLongestCommonPrefix{

public:
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 1&& strs[0].size() == 0) return "";

    string prefix = strs[0];
    for(size_t i = 1; i < strs.size(); i++) {
        for(size_t j = 0; j < prefix.size(); j++) {
            if(prefix[j] != strs[i][j]) {
                prefix = prefix.substr(0, j);
                break;
            }
        }
    }
    return prefix;
}
};

// C# code
// public class Solution {
//     public string LongestCommonPrefix(string[] strs) {
//         if(strs.Length == 1 && strs[0].Length == 0) return "";
//         string prefix = strs[0];
//         for(int i = 1; i < strs.Length; i++) {
//             int j=0;
//             while(j<prefix.Length&&j<strs[i].Length&&prefix[j]==strs[i][j]){
//                 j++;
//             }
//              prefix = prefix.Substring(0, j);
//                    if (prefix == "") return "";
         
//         }
//         return prefix;
//     }
// }