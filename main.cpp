#include<bits/stdc++.h>

#include"arrays/Two Sum.cpp"
using namespace std;
  bool IsValid(string s) {
      if(s.size()==1||s[0]==')'||s[0]==']'||s[0]=='}') return false;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);

            }else {
                if (st.empty()) return false;
                if(!st.empty()&&(s[i]==')'&&st.top()=='(')||(s[i]=='}'&&st.top()=='{')||(s[i]==']'&&st.top()=='[')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
          return st.empty();

    }

int main(){
  cout<<IsValid("(([))]")<<endl;
  cout<<IsValid("([])")<<endl; 

}
