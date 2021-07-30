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

int ans_to_any_base(int n, int b1, int b2){
    int decimal = any_base_to_decimal(n,b1);
    return decimal_to_any_base(decimal,b2);
}
int main(){
    int n;
    cin>>n;
    int b1;
    cin>>b1;
    int b2;
    cin>>b2;
    cout<<ans_to_any_base(n,b1,b2)<<endl;
    return 0;
}