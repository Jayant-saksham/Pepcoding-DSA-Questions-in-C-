#include<bits/stdc++.h>
using namespace std;
void display_reverse(int A[], int n, int index){
    if(index<0){
        return;
    }
    cout<<A[index]<<endl;
    display_reverse(A,n,index-1);
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    display_reverse(A,n,n-1);
    return 0;
}