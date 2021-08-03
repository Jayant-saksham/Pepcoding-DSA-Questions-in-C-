#include<bits/stdc++.h>
using namespace std;
vector<string> getKeypad(string s, string codes[]){
    if(s.size()==0){
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s.at(0);
    string ros = s.substr(1);
    vector<string> res = getKeypad(ros, codes);
    vector<string> ans;
    string target = codes[ch - '0'];
    for(int i=0;i<target.size();i++){
        char x = target.at(i);
        for(string str : res){
            string a = x+str;
            ans.push_back(a);
        }
    }
    return ans;

} 
int main(){
    string s;
    cin>>s;
    string codes[] = {
        ".;",
        "abc", 
        "def", 
        "ghi", 
        "jkl", 
        "mno", 
        "pqrs", 
        "tu", 
        "vwx", 
        "yz",
    };
    vector<string> v = getKeypad(s,codes);
    for(string i : v){
        cout<<i<<endl;
    }
    return 0;
}