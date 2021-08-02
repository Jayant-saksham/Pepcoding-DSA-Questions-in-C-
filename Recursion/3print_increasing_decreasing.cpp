#include<bits/stdc++.h>
using namespace std;
void print_increasing_decreasing(int n){
    if(n<=0){
        return;
    }
    cout<<n<<endl;
    print_increasing_decreasing(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    print_increasing_decreasing(n);
    return 0;
}