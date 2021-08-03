#include<bits/stdc++.h>
using namespace std;
vector<string> getSubsequence(string s){
    if(s.size() == 0){
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s.at(0);
    string ros = s.substr(1);
    vector<string> v = getSubsequence(ros);
    vector<string> res;
    for(auto i : v){
        res.push_back(""+i);
        res.push_back(ch+i);
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    vector<string> v = getSubsequence(s);
    for(auto i : v){
        cout<<i<<endl;
    }
    return 0;
}