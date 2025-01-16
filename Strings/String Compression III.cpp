#include <bits/stdc++.h>

using namespace std;
class StringCompressionIII{
 public:
        string compressedString(string word) {
        int v[word.size()];
        string newword;
        int count = 0;
        for (size_t i = 0; i < word.size(); i++)
        {
          if(word[i] == word[i+1]&&count<8){
            count++;
          }else if(count>9){

          newword += to_string(9);
          newword += word[i];
          count = 0;
          }else{
              count++;
          newword += to_string(count);
          newword += word[i];
          count = 0;
          }
        }
        
        return newword;
    }

};