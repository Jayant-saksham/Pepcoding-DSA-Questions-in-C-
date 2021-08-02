#include<bits/stdc++.h>
using namespace std;
long long int power(int x, int n){
    if(n==0){
        return 1;
    }
    if(x==0 || x==1){
        return x;
    }
    return x*power(x,n-1);
}
int main(){
    int x;
    cin>>x;\
    int n;
    cin>>n;
    cout<<power(x,n)<<endl;
    return 0;
}