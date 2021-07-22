// 0	
// 1	1	
// 2	3	5	
// 8	13	21	34	
// 55	89	144	233	377	

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = -1;
    int b = 1;
    int c;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            c = a + b;
            cout<<c<<"\t";
            a = b;
            b = c;
        }
        cout<<endl;
    }
    return 0;
}