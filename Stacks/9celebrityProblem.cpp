#include<bits/stdc++.h>
using namespace std;
#define N 8
  
bool MATRIX[N][N] = {{0, 0, 1, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 0},
                    {0, 0, 1, 0}};
bool knows(int a, int b){
    if(MATRIX[a][b]){
        return true;
    }
    return false;
}
int findCelebrity(int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>=2){
        int i=s.top();
        s.pop();
        int j=s.top();
        s.pop();
        if(knows(i,j)){
            s.push(j);
        }
        else{
            s.push(i);
        }
    }
    int pot=s.top();
    s.pop();
    for(int i=0;i<n;i++){
        if(i!=pot){
            if(MATRIX[i][pot]==0 || MATRIX[pot][i]==1){
                return -1;
            }
        }
    }
    return pot;
}
int main(){
    cout<<findCelebrity(4);
    return 0;
}