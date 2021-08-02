#include<bits/stdc++.h>
using namespace std;
void toh(int n, int n1, int n2, int n3){
    if(n==0){
        return;
    }
    toh(n-1, n1, n3, n2);
    cout<<n<<"["<<n1<<" -> "<<n2<<"]"<<endl;
    toh(n-1, n3,n2,n1);
}
int main(){
    int n;
    cin>>n;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    toh(n,n,n2,n3);
    return 0;
}