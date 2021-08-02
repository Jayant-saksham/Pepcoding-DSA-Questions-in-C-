#include<bits/stdc++.h>
using namespace std;
void print_zig_zag(int n){
    if(n<=0){
        return;
    }
    cout<<n<<" ";
    print_zig_zag(n-1);
    cout<<n<<" ";
    print_zig_zag(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print_zig_zag(n);
    return 0;
}