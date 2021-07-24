#include<bits/stdc++.h>
using namespace std;
int climb_stairs(int n, int qb[]){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return 0;
    }
    if(qb[n]>0){
        return qb[n];
    }
    int nm1 = climb_stairs(n-1, qb);
    int nm2 = climb_stairs(n-2, qb);
    int nm3 = climb_stairs(n-3, qb);
    int cp = nm1+nm2+nm3;
    qb[n]=cp;
    return cp;
}
int climb_stairs_TAB(int n){
    int *dp=new int[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=0;
    }
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i==1){
            dp[i]=dp[i-1];
        }
        else if(i==2){
            dp[i]=dp[i-1]+dp[i-2];
        }
        else{
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        
    }
    int ans = dp[n];
    delete []dp;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<climb_stairs_TAB(n);
    return 0;
}