#include<bits/stdc++.h>
using namespace std;
int maxPowerof2(int n) {
    int i = 1;
    while(i<<1 <=n) {
        i <<= 1;
    }
    return i;
}
int solution(int n) {
    int hp = maxPowerof2(n);
    int l = n-hp;
    return (l<<1) + 1;
}
int main(){
    cout<<solution(5)<<endl;
    return 0;
}