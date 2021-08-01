#include<bits/stdc++.h>
using namespace std;
bool handleClosing(stack<char> *s, char ch){
    if(s->size()==0){
        return false;
    }
    else if(s->top()!=ch){
        return false;
    }
    else{
        s->pop();
    }
    return true;
}
bool isBalanced(string str){
    stack <char> s;
    for(auto i : str){
        if(i=='(' || i=='[' || i=='{'){
            s.push(i);
        }
        else if(i==')'){
           return handleClosing(&s, '(');
        }
        else if(i==']'){
            return handleClosing(&s, '[');
        }
        else if(i=='}'){
            return handleClosing(&s, '{');
        }
        
    }
    if(s.size()==0){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
    return 0;
}