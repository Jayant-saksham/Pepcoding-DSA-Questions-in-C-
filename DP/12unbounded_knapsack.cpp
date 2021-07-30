#include<iostream>
using namespace std;
int knapSack(int V[], int W[], int n, int target){
    int dp[1+target];
    for(int i=0;i<=target;i++){
        dp[i]=0;
    }
    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(i>=W[j]){
                dp[i]=max(dp[i], dp[i-W[j]]+V[j]);
            }
        }       
    }
    return dp[target];
}
int main(){
    int val[] = {10, 30, 20};
    int wt[] = {5, 10, 15};
    int n=sizeof(val)/sizeof(val[0]);
    cout<<knapSack(val, wt, n, 100);
    return 0;
}