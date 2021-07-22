#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int rem;
    int count=0;
    while(n>0){
        rem=n%10;
        if(rem==target){
            count++;
        }
        n/=10;
    }
    cout<<count<<endl;
    return 0;
}