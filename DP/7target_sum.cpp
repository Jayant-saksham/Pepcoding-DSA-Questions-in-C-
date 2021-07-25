#include<iostream>
using namespace std;
bool targetSum(int *A, int sum, int n){
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0 && j==0){
                dp[i][j]=true;
            }
            else if(i==0){
                dp[i][j]=false;
            }
            else if(j==0){
                dp[i][j] = true;
            }
            else{
                if(j>=A[i-1]){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
                }
                else if(j<A[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
    }
    return dp[n][sum];
}
int main(){
    int A[]={7,1,5,9,3,8,1,0};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<targetSum(A,10,n);

    return 0;
}