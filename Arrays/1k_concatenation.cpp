#include<bits/stdc++.h>
using namespace std;
int kadances(int A[], int n){
    int csum = A[0];
    int msum = A[0];
    for(int i=1;i<n;i++){
        if(csum>=0){
            csum += A[i];
        }
        else{
            csum = A[i];
        }
        msum = max(csum, msum);
    }
    return msum;
}
int kadanceofTwo(int A[], int n){
    int B[2*n];
    for(int i=0;i<n;i++){
        B[i]=A[i];
    }
    for(int i=0;i<n;i++){
        B[i+n]=A[i];
    }
    return kadances(A, n*2);
}
int solution(int A[], int k,int n, int sum){
    if(k==1){
        return kadances(A, n);
    }
    else if(sum<0){
        return kadanceofTwo(A, n);
    }
    else{
        return kadanceofTwo(A, n) + (k-2)*sum;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int k;
        cin>>k;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += A[i];
        }
        cout<<solution(A,k,n,sum)<<endl;        
    }
    
    return 0;
}