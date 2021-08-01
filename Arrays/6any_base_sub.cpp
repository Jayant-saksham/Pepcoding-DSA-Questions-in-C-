#include<bits/stdc++.h>
using namespace std;
int difference(int b, int n1, int n2){
    int ans=0;
    int c=0;
    int p=1;
    while(n2>0){
        int d1 = n1%10;
        n1/=10;
        int d2 = n2%10;
        n2/=10;
        int d=0;
        d2 += c;
        p*=10;
    }
    return ans;
}
int main(){
    int b;
    cin>>b;
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    return 0;
}