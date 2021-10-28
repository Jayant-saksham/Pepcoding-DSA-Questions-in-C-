#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char, int> m;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++) {
        if(m[s.at(i)] == 1) {
            m[s.at(i)]++;
        }
        else {
            m[s.at(i)] = 1;
        }
    }    
    cout<<m.
    return 0;
}