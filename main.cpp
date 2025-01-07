#include<iostream>
#include"strings/Delete Characters to Make Fancy String.cpp"
using namespace std;
int main(){
    // string s = "Marwan";
//     size_t p = 0;
//     size_t q = 1;
// s.erase(s.begin()+1);
// cout << s << endl;

//     // Loop through each character using the pointer
//     while (p<s.size()) {
//         if(s[p]=='a'&& s[q]=='r'){
//           s.erase(s.begin()+p, s.begin()+q+1);
//         }
//         q++;
//         p++;
//     }
// cout<<s<<endl;
DeleteCharacterstoMakeFancyString obj=DeleteCharacterstoMakeFancyString();
cout<<obj.makeFancyString("leeetcode")<<endl;
cout<<obj.makeFancyString("aaabaaaa")<<endl;
cout<<obj.makeFancyString("aab")<<endl;
}
