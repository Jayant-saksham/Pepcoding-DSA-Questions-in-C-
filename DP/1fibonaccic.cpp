#include<bits/stdc++.h>
using namespace std;
// T(n) = O(2^n)
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
// T(n) = O(n)
int betterFib(int n, int *A){
    if(n==0 || n==1){
        return n;
    }
    if(A[n]>0){
        return A[n];
    }
    int output = betterFib(n-1,A)+betterFib(n-2,A);
    A[n]=output;
    return output;
}
  
int fibI(int n){
    int *A = new int[n+1];
    A[0]=1;
    A[1]=1;
    for(int i=2;i<=n;i++){
        A[i]=A[i-1]+A[i-2];
    }
    return A[n];
    delete[] A;
}

int main(){
    int n;
    cin>>n;
    int *A;
    cout<<betterFib(n,A);
    return 0;
}