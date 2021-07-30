#include<bits/stdc++.h>
using namespace std;
int digits(int n, int target){
    int ans=0;
    int rem;
    while(n>0){
        rem=n%10;
        if(rem==target){
            ans++;
        }
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<digits(n, target)<<endl;
    return 0;
}