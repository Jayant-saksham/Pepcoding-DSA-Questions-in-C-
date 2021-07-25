#include<bits/stdc++.h>
using namespace std;
int goldMine(int **A, int n, int m){
    int **dp = new int *[n];
    for(int i=0;i<n;i++){
        dp[i] = new int[m];
    }
    for(int j=(m-1);j>=0;j--){
        for(int i=0;i<n;i++){
            if(j==(m-1)){
                dp[i][j]=A[i][j];
            }
            else if(i==0){
                dp[i][j] = dp[i][j] + max(dp[i][j+1], dp[i+1][j+1]);
            }   
            else if(i==(n-1)){
                dp[i][j] = dp[i][j] + max(dp[i][j+1], dp[i-1][j+1]);
            }
            else{
                dp[i][j] = dp[i][j] + max(dp[i][j+1], max(dp[i-1][j+1], dp[i+1][j+1]));
            }
        }
    }
    int maxi = INT16_MIN;
    int j=0;
    for(int i=0;i<n;i++){
        if(dp[i][j]>maxi){
            maxi = dp[i][j];
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;i++){
            cin>>A[i][j];
        }
    }
    
    return 0;
}