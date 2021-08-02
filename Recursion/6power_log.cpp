#include<bits/stdc++.h>
using namespace std;
long long int power(int x, int n){
    if(n==0){
        return 1;
    }
    if(x==0 || x==1){
        return x;
    }
    int ans = power(x,n/2);
    ans*=ans;
    if(n&1){
        ans*=x;
    }
    return ans;

}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<power(x,n)<<endl;
    return 0;
}