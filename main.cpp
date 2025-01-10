#include<iostream>
#include"strings/Delete Characters to Make Fancy String.cpp"
#include"Strings/Uncommon Words from Two Sentences.cpp"
#include"Strings/RotateString.cpp"
#include<map>
using namespace std;
int main(){
//     int array[] = {1,2,3,4,5,1,5,6,-1,-3};
//     int n = sizeof(array)/sizeof(array[0]);
//     map<int,int> mp;
//     while(n--){
//         mp[(array[n])]++; 
//     }
//    for(auto it:mp){
//        cout<<it.first<<" "<<it.second<<endl;
//    }
RotateString rs=RotateString();
// cout<<rs.rotateString("defdefdefabcabc","defdefabcabcdef");
// cout<<rs.rotateString("abcde","cdeab");
 cout<<rs.rotateString("abcde","abced");
    return 0;

}
