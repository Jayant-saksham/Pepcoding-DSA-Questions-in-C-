#include<bits/stdc++.h>
using namespace std;
int kernigham(int n) {
    int count = 0;
    while(n!=0) {
        int rmsb = (n&(-n));
        n -= rmsb;
        count++;
    }
    return count;
}
int main() {
    cout<<kernigham(13)<<endl;
    return 0;
}