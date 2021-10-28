#include<bits/stdc++.h>
using namespace std;
int rightMostSetBit(int n) {
    return (n&(-n));
}
string rightMostSetBitStr(int n) {
    return bitset<16>(n&-n).to_string();
}
int main() {
    cout<<rightMostSetBit(12)<<endl;
    return 0;
}