#include<bits/stdc++.h>
using namespace std;
bool isOperator(char ch){
    if(ch=='+' || ch=='*' || ch=='-' || ch=='/'){
        return true;
    }
    return false;
}
int precedence(char ch){
    if(ch=='+' || ch=='-'){
        return 1;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='^'){
        return 3;
    }
    return 0;
}
string toPostfix(string infix){
    stack<char> s;
    string ans="";
    for(int i=0;i<infix.size();i++){
        char ch=infix.at(i);
        if(ch=='('){
            s.push(ch);
        }
        else if(ch==')'){
            while(s.top()!='('){
                ans+=s.top();
                s.pop();
            }
            s.pop();
        }
        else if(isOperator(ch)){
            while(!s.empty() && precedence(ch) <=precedence(s.top())){
                ans+=s.top();
                s.pop();
            }
            s.push(ch);
        }
        else{
            ans+=ch;
        }
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    return ans;
}
string toPrefix(string infix){
    int n=infix.size();
    reverse(infix.begin(), infix.end());
    for(int i=0;i<n;i++){
        char ch = infix.at(i);
        if(ch=='('){
            ch=')';
            i++;
        }
        else if(ch==')'){
            ch='(';
            i++;
        }
    }
    string prefix = toPostfix(infix);
    reverse(prefix.begin(), prefix.end());
    return prefix;
}
int main(){
    string infix;
    cin>>infix;
    cout<<toPrefix(infix)<<endl;
    return 0;
}