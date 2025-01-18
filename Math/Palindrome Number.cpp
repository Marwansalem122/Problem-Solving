#include<bits/stdc++.h>
using namespace std;
class PalindromeNumber{
    public:
     bool isPalindrome(int n) {
         if(n<0) return false;
         int rev=0;
         int temp=n;
         while(temp>0){
             int rem=temp%10;
             rev=rev*10+rem;
             temp=temp/10;
         }
         return rev==n;
     }
};