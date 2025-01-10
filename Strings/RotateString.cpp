#include <bits/stdc++.h>
using namespace std;
class  RotateString{
    public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string temp=s+s;
        /*npos It is used to indicate that no matches
         were found during a string search operation*/
         return temp.find(goal)!=string::npos;
    }
};