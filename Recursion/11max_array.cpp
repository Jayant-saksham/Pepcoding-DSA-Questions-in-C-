#include<bits/stdc++.h>
using namespace std;
int maxArray(int A[], int n){
    if(n==1){
        return A[0];
    }
    int ans = maxArray(A,n-1);
    if(ans>A[n-1]){
        return ans;
    }
    return A[n-1];
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<maxArray(A,n)<<endl;
    return 0;
}