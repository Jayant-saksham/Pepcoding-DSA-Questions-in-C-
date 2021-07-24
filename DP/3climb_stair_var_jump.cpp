#include<bits/stdc++.h>
using namespace std;
int climbStairs(int *dp, int A[], int n){
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=A[i] && i+j<n;j++){
            dp[i] += dp[i+j];
        }
    }
    return dp[0];
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int *dp = new int[n+1];
    dp[n]=1;
    cout<<climbStairs(dp, A, n)<<endl;
    delete[] dp;
    return 0;
}