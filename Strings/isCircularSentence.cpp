#include<string>
using namespace std;
class CircularSentence{
    public:
    bool isCircularSentence(string sentence){
         bool isCircular=false;
    for (int i=0;i<sentence.length();i++)
        if(sentence[i]==' '&&sentence[i-1]!=sentence[i+1]) return false;
    return sentence[0]==sentence.back();
    }
};