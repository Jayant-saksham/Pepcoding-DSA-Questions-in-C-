#include<bits/stdc++.h>
using namespace std;
vector<int> NSL(int A[], int n){
    stack<pair<int, int>> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top().first<A[i]){
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({A[i], i});
    }
    return v;
}
vector<int> NSR(int A[], int n){
    stack<pair<int, int>> s;
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            v.push_back(n);
        }
        else if(!s.empty() && s.top().first<A[i]){
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(n);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({A[i], i});
    }
    reverse(v.begin(), v.end());
    return v;
}
int maxArea(int A[], int n){
    vector<int> left=NSL(A,n);
    vector<int> right=NSR(A,n);
    vector<int> width;
    for(int i=0;i<left.size();i++){
        int ans=right[i]-left[i]-1;
        width.push_back(ans);
    }
    vector<int> areas;
    for(int i=0;i<width.size();i++){
        areas.push_back(A[i]*width[i]);
    }
    int maxarea=INT_MIN;
    for(int i=0;i<areas.size();i++){
        if(areas[i]>maxarea){
            maxarea=areas[i];
        }
    }
    return maxarea; 
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
   cout<<maxArea(A,n)<<endl;
    return 0;
}