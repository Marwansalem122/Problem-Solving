#include <bits/stdc++.h>
using namespace std;
class SentenceSimilarityIII
{

public:
  bool areSentencesSimilar(string sentence1, string sentence2) {
        if (sentence1 == sentence2) return true;
        stringstream ss1(sentence1);
        stringstream ss2(sentence2);
 vector<string> word1((istream_iterator<string>(ss1)), istream_iterator<string>());
vector<string> word2((istream_iterator<string>(ss2)), istream_iterator<string>());
      int l=0,r1=word1.size()-1,r2=word2.size()-1;
      while (l <= r1 && l <= r2&& word1[l] == word2[l]) l++;
        while (r1 >= l && r2 >= l&& word1[r1] == word2[r2]) r1--, r2--;
        return l > r1 || l > r2;
  }
    };