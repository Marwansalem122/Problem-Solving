#include<iostream>
// #include"strings/Delete Characters to Make Fancy String.cpp"
// #include"Strings/Uncommon Words from Two Sentences.cpp"
// #include"Strings/RotateString.cpp"
// #include"Strings/Multiple Strings.cpp"
#include"Strings/Minimum Time Difference.cpp"
#include<map>
using namespace std;
int main(){
    MinimumTimeDifference mtd=MinimumTimeDifference();
    vector<string> v={"23:59","00:00"};
    cout<<mtd.findMinDifference(v);

}
