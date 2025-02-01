#include <bits/stdc++.h>
using namespace std;
class VaalidParentheses{
    public:
      bool IsValid(string s) {
      if(s.size()==1||s[0]==')'||s[0]==']'||s[0]=='}') return false;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);

            }else {
               
                if(!st.empty()&&(s[i]==')'&&st.top()=='(')||(s[i]=='}'&&st.top()=='{')||(s[i]==']'&&st.top()=='[')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
          return st.empty();

    }
};