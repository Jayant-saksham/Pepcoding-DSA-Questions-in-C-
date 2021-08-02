#include<bits/stdc++.h>
using namespace std;
vector<int> allIndex(int A[], int n){
    
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
    vector<int> v = allIndex(A,n);
    for(auto i : v){
        cout<<i<<endl;
    }    
    return 0;
}