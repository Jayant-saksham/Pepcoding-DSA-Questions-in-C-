#include<bits/stdc++.h>
using namespace std;
int firstIndex(int A[], int index, int x, int n){
    if(index==n){
        return -1;
    }
    if(A[index]==x){
        return index;
    }
    else{
        int fi = firstIndex(A,index+1,x,n);
        return fi;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    cout<<firstIndex(A,0,x,n)<<endl;
    return 0;
}