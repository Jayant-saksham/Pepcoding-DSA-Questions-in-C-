#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n){
    if(n==0 || n==1){
        return n;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}