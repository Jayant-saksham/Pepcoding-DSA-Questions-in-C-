#include<bits/stdc++.h>
using namespace std;
int minJumps(int A[], int n, int *dp){
    for(int i=n-1;i>=0;i--){
        if(A[i]>0){
            int mini = INT16_MAX;
            for(int j=1;j<=A[i] && i+j<n;j++){
                if(dp[i+j]>0){
                    mini = min(mini, dp[i+j]);
                }
            }
            if(mini!=INT16_MAX){
                dp[i]=1+mini;
            }
            else{
                dp[i]=0;
            }
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
    dp[n]=0;
    cout<<minJumps(A, n, dp)<<endl;
    return 0;
}