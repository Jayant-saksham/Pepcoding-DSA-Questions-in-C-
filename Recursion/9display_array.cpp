#include<bits/stdc++.h>
using namespace std;
void printArray(int A[], int index, int n){
    if(index==n){
        return;
    }
    cout<<A[index]<<" ";
    printArray(A, index+1, n);
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    printArray(A,0, n);
    return 0;
}