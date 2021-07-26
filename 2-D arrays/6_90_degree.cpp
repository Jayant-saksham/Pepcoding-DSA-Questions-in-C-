#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    // Transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(A[i][j], A[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int li=0;
        int ri=m-1;
        while(li<ri){
            swap(A[i][li], A[i][ri]);
            li++;
            ri--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}