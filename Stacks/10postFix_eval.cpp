#include<bits/stdc++.h>
using namespace std;
int operation(int a, int b, char ch){
    if(ch=='+'){
        return a+b;
    }
    else if(ch=='-'){
        return a-b;
    }
    else if(ch=='*'){
        return a*b;
    }
    else if(ch=='/'){
        return a/b;
    }
    return -1;
}
bool isOperator(char ch){
    if(ch=='+' || ch=='*' || ch=='-' || ch=='/'){
        return true;
    }
    return false;
}
int postFixSolver(string exp){
    stack<int>s;
    stack<string> prefix;
    stack<string> infix; 
    for(int i=0;i<exp.size();i++){
        char ch=exp.at(i);
        if(ch=='('){
            s.push(ch);
        }
        else if(isOperator(ch)){
            int a = (int)s.top();
            s.pop();
            int b = (int)s.top();
            s.pop();
            int ans = operation(b,a,ch);
            s.push(ans);
            string iv2=infix.top();
            infix.pop();
            string iv1=infix.top();
            infix.pop();
            string ival = "(" + iv1 + ch +iv2 +")";
            infix.push(ival);

            
        }
        else if(ch==')'){
            while(s.top()!='('){
                int a = (int)s.top();
                s.pop();
                int b = (int)s.top();
                s.pop();
                
            }
        }
    }
}
int main(){
    
    return 0;
}