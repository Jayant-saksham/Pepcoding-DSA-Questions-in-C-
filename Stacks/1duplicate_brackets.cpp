#include<bits/stdc++.h>
using namespace std;
bool duplicate_brackets(string str){
    stack<char> s;
    int n = str.size();
    for(int i=0;i<n;i++){
        if(str[i]==')'){
            if(s.top()=='('){
                return true;
            }
            else{
                while(s.top()!='('){
                    s.pop();
                }
                s.pop();
            }
        }
        else{
            s.push(str[i]);
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    cout<<duplicate_brackets(s)<<endl;
    return 0;
}