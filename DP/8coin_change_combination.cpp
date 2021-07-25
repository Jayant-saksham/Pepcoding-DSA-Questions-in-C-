//Combination of coins so that we can pay
#include<iostream>
using namespace std;
int combination(int A[], int amt, int n){
    int *dp = new int[1+amt];
    for(int i=0;i<=amt;i++){
        dp[i]=0;
    }
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=A[i];j<=amt;j++){
            if(j>=A[i]){
                dp[j] = dp[j] + dp[j-A[i]];
            }
        }
    }
    return dp[amt];
}
int main(){
    int denomination[] = {1,2,3};
    int n=sizeof(denomination)/sizeof(denomination[0]);
    int amount=4;
    cout<<combination(denomination, amount, n);
    return 0;
}