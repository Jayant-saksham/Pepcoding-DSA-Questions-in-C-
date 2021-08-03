#include<bits/stdc++.h>
using namespace std;
vector<int> allIndex(int A[], int n, int x, int index, int fsf){
    if(index==n){
        vector<int>v(fsf);
        return v;
    }
    if(A[index]==x){
        vector<int> v = allIndex(A,n,x,index+1,fsf+1);
        v[fsf] = index;
    }
    else{
        vector<int> v = allIndex(A,n,x,index+1,fsf);
        return v;
    }
    // return v;
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
    vector<int> v = allIndex(A,n,x,0,0);
    for(auto i : v){
        cout<<i<<endl;
    }    
    return 0;
}