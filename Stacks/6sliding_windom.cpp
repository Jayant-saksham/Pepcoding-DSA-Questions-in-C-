#include<bits/stdc++.h>
using namespace std;
vector<int> NGR(int A[], int n) {
    vector<int> v;
    stack<int> s;
    for(int i=(n-1);i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<A[i]){
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()>=A[i]){
            while(!s.empty() && s.top()<=A[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(A[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}
vector<int> slidingWindow(int A[], int n, int k) {
    int j = 0;
    vector<int> ngr = NGR(A, n);
    vector<int> ans;
    for(int i=0;i<=(n-k);i++) {
        if(j<i){
            j=i;
        }
        while(ngr[j]<i+k){
            j = ngr[j];
        }
        ans.push_back(A[j]);
    }
    return ans;    
}
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int k;
    cin>>k;
    vector<int> v = slidingWindow(A,n,k);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}