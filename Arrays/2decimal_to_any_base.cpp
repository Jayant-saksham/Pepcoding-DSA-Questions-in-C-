#include<bits/stdc++.h>
using namespace std;
int decimal_to_any_base(int n, int b){
    int ans=0;
    int rem;
    int i=0;
    while(n>0){
        rem=n%b;
        ans = ans + rem*pow(10,i);
        i++;
        n/=b;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int b;
    cin>>b;
    cout<<decimal_to_any_base(n,b)<<endl;
    return 0;
}