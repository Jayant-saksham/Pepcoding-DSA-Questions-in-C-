#include<bits/stdc++.h>
using namespace std;
vector<string> printGrayCode(int n) {
    if(n==0) {
        vector<string> base;
        base.push_back("0");
        return base;
    }
    if(n==1) {
        vector<string> base;
        base.push_back("0");
        base.push_back("1");
        return base;
    }
    vector<string> smallAns = printGrayCode(n-1);
    vector<string> ans;
    for(int i=0;i<smallAns.size();i++) {
        ans.push_back("0" + smallAns.at(i));
    }
    for(int i=smallAns.size()-1;i>=0;i--) {
        ans.push_back("1" + smallAns.at(i));
    }
    return ans;
}
int main(){
    vector<string> v = printGrayCode(3);
    for(auto i : v) {
        cout<<i<<" ";
    }
    return 0;
}