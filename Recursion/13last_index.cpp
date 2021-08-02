#include<bits/stdc++.h>
using namespace std;
int lastIndex(int A[], int n, int index, int x){
    if(index<0){
        return -1;
    }
    if(A[index]==x){
        return index;
    }
    else{
        int li = lastIndex(A,n,index-1,x);
        return li;
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
    cout<<lastIndex(A,n,n-1,x)<<endl;
    return 0;
}