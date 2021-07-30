#include<bits/stdc++.h>
using namespace std;
int any_base_to_decimal(int n, int b){
    int ans=0;
    int i=0;
    int rem;
    while(n>0){
        rem=n%10;
        ans = ans + rem*pow(b,i);
        i++;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int b;
    cin>>b;
    cout<<any_base_to_decimal(n,b)<<endl;
    return 0;
}