#include<bits/stdc++.h>
using namespace std;
int getSum(int b, int n1, int n2) {
    int ans=0;
    int c=0;
    int i=0;
    while(n1>0 || n2>0 || c>0) {
        int d1 = n1%10;
        int d2 = n2%10;
        n1/=10;
        n2/=10;
        int d = d1+d2+c;
        c=d/b;
        d=d%b;
        ans = ans + d*pow(10,i);

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
    cout<<getSum(b,n1,n2)<<endl;
    return 0;
}