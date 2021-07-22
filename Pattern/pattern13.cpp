// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int iCj = 1;
        for(int j=0;j<=i;j++){
            cout<<iCj<<"\t";
            int iCjp1 = iCj*(i-j) / (j+1);
            iCj = iCjp1;
        }
        cout<<endl;
    }
    return 0;
}