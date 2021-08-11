#include<bits/stdc++.h>
using namespace std;
int priority(char ch){
    if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch == '-' || ch == '+'){
        return 1;
    }
    else if(ch=='^'){
        return 3;
    }
    return 0;
}
bool isOperator(char ch){
    if(ch == '+' || ch == '*' || ch == '-' || ch == '/'){
        return true;
    }
    return false;
}
int operation(int v1, int v2, char op){
    if(op=='+'){
        return v1+v2;
    }
    else if(op=='-'){
        return v1-v2;
    }
    else if(op=='/'){
        return v1/v2;
    }
    else if(op=='*'){
        return v1*v2;
    }
    return 0;
}
int infix(string s){
   stack<int> values;
   stack<char> op;
   for(int i=0;i<s.size();i++){
       char ch = s.at(i);
       if(isdigit(ch)){
           values.push(ch-'0');
       }
       else if(ch == ' '){
           continue;
       }
       else if(ch=='('){
           op.push(ch);
       }
       else if(isOperator(ch)){
           while(!op.empty() && op.top()!='(' && priority(ch)<=priority(op.top())){
               int a = values.top();
               values.pop();
               int b = values.top();
               values.pop();
               char c = op.top();
               op.pop();
               int ans = operation(b,a,c);
               values.push(ans);
           }
           op.push(ch);
       }
       else if(ch == ')'){
           while(op.top()!='('){
               int a = values.top();
               values.pop();
               int b = values.top();
               values.pop();
               char c = op.top();
               op.pop();
               int ans = operation(b,a,c);
               values.push(ans);                              
           }
           if(!op.empty()){
               op.pop();
           }
       }
   }    
   while(!op.empty()){
       int a=values.top();
       values.pop();
       int b=values.top();
       values.pop();
       char c = op.top();
       op.pop();
       int ans = operation(b,a,c);
       values.push(ans);
   }
   if(values.empty()){
       return 0;
   }
   return values.top();
}

int main(){
    string s;
    cin>>s;
    cout<<infix(s)<<endl;
    return 0;
}